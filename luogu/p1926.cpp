#include<cstdio>
#include<algorithm>

using namespace std;

int ttime[15];
int ztime[15];
int sorce[15];
int f[155];
int main( )
{
	int n,m,k,r;
	scanf( "%d%d%d%d",&n,&m,&k,&r);

	for(int i = 1;i <= n;i++)   scanf( "%d",&ttime[i]);
	for( int i = 1;i <= m;i++)  scanf( "%d",&ztime[i]);
	for(int i = 1;i <= n;i++)   scanf( "%d",&sorce[i]);


	for(int i = 1;i <= m;i++)
	{
		for( int j = r;j >= ztime[i];j--)
		{
			f[j] = max(f[j],f[j-ztime[i]] + sorce[i]);   //f[j]   表示分数
		}
	}

/*	for( int i  = 1;i <= r;i++)
	{
		printf( "%d  ",f[i]);
	}

	printf( "\n");*/
	int stime = 0;
	for( int i = 1;i <= r;i++)
	{
		if(f[i] >= k)  
		{
	//		printf( "i = %d   f[i] = %d\n",i,f[i]);
			stime = r - i;
			break;
		}
	}
	sort(ttime+1,ttime+n+1);

	int i = 1;
	int sum = 0;
	while(stime >= ttime[i])
	{
		stime -= ttime[i];
		sum++;
		i++;
	}


	printf( "%d\n",sum);


}
