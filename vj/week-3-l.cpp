#include<cstdio>
#include<queue>
#include<algorithm>
#define  maxn 100005
using namespace std;

int flag;
int pre[maxn];
int book[maxn];
int find(int x);
void join(int x,int y);
int main( )
{
	int a,b;
	while((scanf( "%d%d",&a,&b)))
	{
		if(a == -1 || b == -1)  break;
		if(a == 0 || b == 0)
		{
			printf( "Yes\n");
			continue;
		}
		
		for(int i = 0;i < maxn;i++)
		{
			pre[i] = i;
			book[i] = 0;
		}
		join(a,b);

		flag = 1;
		book[a] = 1;
		book[b] = 1;

		while(scanf( "%d%d",&a,&b) && a != 0)
		{
			join(a,b);
	              	book[a] = 1;
			book[b] = 1;    
		}


		if(flag == 0)
		{
			printf( "No\n");
			continue;
		}
		else
		{
			int count = 0;
			for(int i = 0;i <= maxn;i++)
			{
				if(book[i] && pre[i] == i)   count++;  //判断  有几个根
			}

			if(count == 1)   printf( "Yes\n");
			else  printf( "No\n");
		}


	}
}


void join(int x,int y)
{
	int tx = find(x);
	int ty = find(y);

	if(tx != ty)
	{
		pre[ty] = tx;
	}
	else
	{
		flag = 0;    //如果有两个 根
	}
}

int find(int x)
{
	int temp = x;
	while(temp != pre[temp])
	{
		temp = pre[temp];
	}


/*	int i = x;
	int j;

	while(i != temp)
	{
		j = pre[i];
		pre[i] = temp;
		i = j;
	}

*/
	return temp;
}
