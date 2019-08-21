#include<cstdio>
#include<algorithm>
#define ll long long

using namespace std;

int lose[1005];
int win[1005];
int use[1005];
long long f[1005];
int main( )
{
	int n,x;
	scanf( "%d%d",&n,&x);
	for(int i = 1;i <= n;i++)   scanf( "%d%d%d",&lose[i],&win[i],&use[i]);

	for(int i = 1;i <= n;i++)
	{
		for(int j = x;j >= 0;j--)  //   遍历背包 
		{
			if(j >= use[i])
			{
				f[j] = max(f[j] + lose[i],f[j - use[i]] + win[i]);
			}
			else 
			{
				f[j] = f[j] + lose[i];
			}
		}
	}

	printf( "%lld\n",f[x]*5);
}
