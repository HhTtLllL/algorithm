#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int m[1010];
int f[1010];
int sg[1010];
int s[1010];
void getsg(int n);

int main()
{
	int t;
	while(cin >> t && t)
	{
		for(int i = 1;i <= 1005;i++) f[i] = i-1;
		for(int i = 1;i <= t;i++)  cin >> m[i];
		getsg(1000);
		for(int i = 1;i <= t-1;i++)
		{
			sg[m[1]] ^= sg[m[i+1]];
		}
		if(sg[m[1]])   printf( "Rabbit Win\n");
		else printf( "Grass Win\n");
	}
}

void getsg(int n)
{
	int i,j;
	memset(sg,0,sizeof(sg));
	for(i = 1;i <= n;i++)
	{
		memset(s,0,sizeof(s));
		for(j = 0;f[j] <= i && j < 1005;j++)
		{
			s[sg[i-f[j]]] = 1;
		}
		for(j = 0;;j++)
		{
			if(!s[j])
			{
				sg[i] = j;
				break;
			}
		}
	}
}
