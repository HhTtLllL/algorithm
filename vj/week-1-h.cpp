#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

void list1(void);
struct node
{
	int n;
	int step;
};

int prime[100000];   //标记  是否 为素数
int book[100000];
int vis[100000];   //标记 是否走过
int count;
int main( )
{
	//打个素数表
	list1();
	struct node temp;
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		int n1,n2;
		scanf( "%d%d",&n1,&n2);
		temp.n = n1;
		temp.step = 0;

		memset(vis,0,sizeof(vis));

		vis[n1] = 1;
		queue<node> s;
		s.push(temp);

		while(!s.empty( ))
		{
			struct node front;
			front = s.front( );
			if(front.n == n2)
			{
				printf( "%d\n",front.step);
				break;
			}
	
			//个位
			for(int i = 1;i <= 9;i += 2)
			{
				temp.n = front.n / 10 * 10 + i;
				temp.step = front.step + 1;

				if(vis[temp.n] == 0 && book[temp.n] == 0)
				{
					vis[temp.n] = 1;
					s.push(temp);
				}
			}
			//十位
			for(int i = 0;i <= 9;i++)
			{
				temp.n = front.n / 100 * 100 + front.n%10 + i*10;
				temp.step = front.step + 1;
				if(vis[temp.n] == 0 && book[temp.n] == 0)
				{
					vis[temp.n] = 1;
					s.push(temp);
				}
			}
			// 百位
			for(int i = 0;i <= 9;i++)
			{
				temp.n = front.n/1000 *1000 + front.n % 100 + i*100;
				temp.step = front.step + 1;
				if(vis[temp.n] == 0 && book[temp.n] == 0)
				{
					vis[temp.n] = 1;
					s.push(temp);
				}
			}


			//千位
			for(int i = 1;i <= 9;i++)
			{
				temp.n = front.n%1000 + i*1000;
				temp.step = front.step + 1;
				if(vis[temp.n] == 0 && book[temp.n] == 0)
				{
					vis[temp.n] = 1;
					s.push(temp);
				}
			}

			s.pop( );
		}
		if(s.empty( ))    printf( "Improsses\n");
	}

}

void list1()
{
	book[0] = 0;
	book[1] = 0;
	for(int i = 2;i <= 100000;i++)
	{
		if(!book[i])
		{
			prime[count] = i;
			count++;
		}

		for(int j = 0;j < count && i*prime[j] <= 100000;j++)
		{

			book[i*prime[j]] = 1;
			if(i % prime[j] == 0)   break;
		}
	}

}
