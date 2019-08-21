#include<cstdio>
#include<cstring>

using namespace std;

int f[20];
int SG[1005];
int mex[1005];
void init( );
void getSG(int n);
int main( )
{
	init();
	getSG(1002);

	int sum;
	while(~scanf("%d",&sum))
	{
		if(SG[sum])   printf( "Kiki\n");
		else printf( "Cici\n");
	}
}

void init( )
{
	f[0] = 1;
	for(int i = 1;i <= 10;i++)
	{
		f[i] = f[i -1]*2;
	}
}

void getSG(int n)
{
	SG[0] = 0;
	for(int i = 1;i <= n;i++)
	{
		memset(mex,0,sizeof(mex));

		for(int j = 0;f[j] <= i && j <= 10;j++)
		{
			mex[SG[i - f[j]]] = 1;
		}

		int j = 0;
		while(true)
		{
			if(!mex[j])
			{
				SG[i] = j;
				break;
			}
			j++;
		}
	}

	return ;
}
