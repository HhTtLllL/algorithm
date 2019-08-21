#include<cstdio>
#include<queue>

using namespace std;
queue<int> s;
int book[10000002];
int num;
int main( )
{
	int n,k;
	scanf( "%d%d",&n,&k);
	book[n] = 1;    //将起点进行标记  
	if(n >= k)
	{
		printf( "%d\n",n-k);
		return 0;
	}
	else
	{
		s.push(n);
		while(!s.empty( ))
		{
			num++;
			for(int i = 0;i <= 2;i++)
			{

				int tx;
				if(i == 0)	 tx = s.front( )-1;
				else if(i == 1)    tx = s.front( )+1;
				else   tx = 2*s.front( );
				
				if(tx >= 0 && tx < 100001 && book[tx] == 0)	
				{
					book[tx] = book[s.front( )] + 1;   //进行到 该点的时候 是 第几步
					s.push(tx);

				}
			}

			if(s.front( ) == k)
			{
				printf( "%d\n",book[s.front( )] - 1);
				return 0;
			}
			s.pop( );
			
		}


	}
}
