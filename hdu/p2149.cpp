//  巴什博弈

#include<cstdio>
#include<algorithm>

using namespace std;

int main( )
{
	int n,m;
	while(scanf( "%d%d",&n,&m) != EOF)
	{
		if(m >= n)
		{
			printf( "%d",n);
			for(int i =n+1;i <= m;i++ )   printf( " %d",i);
			printf( "\n");
		}
		else
		{
			int mod = n%(m+1);
			if(mod == 0)   printf( "none\n");
			else    printf( "%d\n",mod);
		}
	}
}
