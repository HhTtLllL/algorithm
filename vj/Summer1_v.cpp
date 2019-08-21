#include<iostream>
#include<string.h>

using namespace std;

int getsg(int n);
int f[20];
int sg[1010],s[1010];

int main()
{
	int n,m,p;
	f[0] = f[1] = 1;
	
	for(int i = 2;i <= 16;i++)   f[i] = f[i-1] + f[i-2];  //用来标记后继状态
	getsg(1000);
	while(cin >> n >> m >> p && n)
	{
		if(sg[n] ^ sg[m] ^ sg[p])  printf( "Fibo\n");
		else printf( "Nacci\n");

	}

	return 0;
}

int getsg(int n)
{
	int i,j;
	memset(sg,0,sizeof(sg));
	for(i = 1;i <= n;i++)                            // 
	{                                               //f[j] 每一步可能的操作 
		memset(s,0,sizeof(s));                 //sg[i-f[j]]   是所有后继状态之和
		for(j = 0;f[j] <= i && j < 20;j++)	s[sg[i-f[j]]] = 1;//s 相当于 mex()
										
		for(j = 0;;j++)
		{
			if(!s[j])
			{
				sg[i] = j;
				break;
			}
		}
	}

	return 0;
}
