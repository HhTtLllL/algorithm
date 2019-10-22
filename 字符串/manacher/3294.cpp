#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>


using namespace std;

const int MAXN = 2e5 + 10;
char ma[MAXN * 2];
int p[MAXN * 2];

void manacher(char s[],int len)
{
	int l = 0;
	ma[l++] = '$';
	ma[l++] = '#';
	for(int i = 0;i < len;i++)
	{
		ma[l++] = s[i];
		ma[l++] = '#';
	}
	ma[l] = 0;
	int mx = 0,id = 0;
	for(int i = 0;i < l;i++)
	{
		p[i] = mx > i ?min(p[2*id - i],mx - i):1;
		if(i >= p[i])
		{
			while(ma[i + p[i]] == ma[i - p[i]])  p[i]++;
		}
		if(i + p[i] > mx)
		{
			mx = i + p[i];
			id = i;
		}
	}
}



char a[MAXN];
char b[MAXN];

int main()
{
	char ch;
	while(scanf("%c%s",&ch,a) != EOF)
	{
		getchar();
		int flag = 0;
		int temp = 0;
		int len = strlen(a);
		manacher(a,len);
		temp = *max_element(p,p + 2*len + 2) - 1;
		if(temp == 1)
		{
			 cout << "No solution!" << endl;
			 continue;
		}
		else
		{
			for(int i = 0;i < 2*len + 2;i++)
			{
				if(p[i] == (temp + 1))
				{
					flag = i;
					break;
				}
			}
		}

		flag = flag/2 - p[flag]/2;
		printf("%d %d\n",flag,flag + temp - 1);
		int temp1 = ch - 'a';
		
		for(int i = flag;i < flag + temp;i++)
		{
			if((a[i] - temp1) >= 'a') printf("%c",a[i] - temp1);
			else 
			{
				printf( "%c",'z' - temp1 + 1 + a[i] - 'a');
			}
		}
		cout << endl;
	}
}









