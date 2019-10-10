#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 110000 + 10;

char Ma[MAX * 2];
int p[MAX * 2];

void manacher(char s[],int len)
{
	//预处理
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
		p[i] = mx > i ? min(p[2*id - i],mx - i):1;
		while(Ma[i + p[i]] == Ma[i - p[i]]) p[i]++;
		if(i + p[i] > mx)
		{
			mx = i + p[i];
			id = i;
		}
	}

}
int main()
{
	char s[MAX];
	while(scanf("%s",s) == 1)
	{
		int len = strlen(s);
		manacher(s,len);
		int ans = 0;
		for(int i = 0;i < 2*(len + 1);i++) ans = max(ans,p[i] - 1);

		printf("%d\n",ans);
	}



	return 0;
}
