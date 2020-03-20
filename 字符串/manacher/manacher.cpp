#include <iostream>
#include <cstring>

//求最长回文串

using namespace std;

const int MAXN = 110010;
char Ma[MAXN*2];
int Mp[MAXN*2];

void Manacher(char s[],int len)
{
	// 将字符串转变
	int l = 0;
	Ma[l++] = '$';
	Ma[l++] = '#';
	for(int i = 0;i < len;i++)
	{
		Ma[l++] = s[i];
		Ma[l++] = '#';
	}


	Ma[l] = 0;
	int mx = 0,id = 0;
	for(int i = 0;i < l;i++)
	{
		//  当 mx > i时,以 i 为中心扩展回文串
		Mp[i] = mx > i ? min(Mp[2*id - i],mx - i):1;

		if(i >= Mp[i]) 
		{
			while(Ma[i + Mp[i]] == Ma[i - Mp[i]])
			{
			//	if(i < Mp[i]) cout << 111 << endl;
				Mp[i]++;  // 向两边进行扩展   以 i 为中心扩展回文串,或者到达边界
			}
		}
		if(i + Mp[i] > mx)
		{
			mx = i + Mp[i];
			id = i;
		}
	}
}

/*
 * abaaba
 *
 * i:       0 1 2 3 4 5 6 7 8 9 10 11 12 13
 * Ma[i]:   $ # a # b # a # a #  b  #  a  #
 * Mp[i]:   1 1 2 1 4 1 2 7 2 1  4  1  2  1
 */

int main()
{
	char s[MAXN];
	while(scanf("%s",s) == 1)
	{
		int cnt = 0;
		int len = strlen(s);
		Manacher(s,len);
		int ans = 0;
		for(int i = 0;i < 2*len+2;i++)  ans = max(ans,Mp[i] - 1);
		for(int i = 0;i < 2*len + 2;i++) cout << Mp[i] << " ";
	/*	for(int i = 0;i < 2 * len + 2;i++) cnt += Mp[i];
		cout << cnt << endl;*/
		printf("ans = %d\n",ans);
	}
	return 0;
}
