#include<cstdio>
#include<queue>


using namespace std;

struct node 
{
	int x;
	int y;
	int a[10000];    //记录下 每次的操作 
	int step;
};
int book[105][105];
queue<node> s;
struct node front;
int main( )
{
	int a,b,c;
	scanf( "%d%d%d",&a,&b,&c);
//	book[a][b] = 1;

	struct node temp;
	temp.x = 0;
	temp.y = 0;
	temp.step = 0;
	book[0][0] = 1;
	s.push(temp);

	while(!s.empty( ))
	{
		front = s.front( );
		s.pop( );

		if(front.x == c || front.y == c)
		{
			printf( "%d\n",front.step);
			for(int i = 1;i <= front.step;i++)
			{
				if(front.a[i] == 1)  printf( "FILL(1)\n");
				if(front.a[i] == 2)  printf( "FILL(2)\n");
				if(front.a[i] == 3)  printf( "DROP(1)\n");
				if(front.a[i] == 4)  printf( "DROP(2)\n");
				if(front.a[i] == 5)  printf( "POUR(1,2)\n");
				if(front.a[i] == 6)  printf( "POUR(2,1)\n");
			}

			return 0;
		}

		for(int i = 1;i <= 6;i++)
		{
			temp = front;
			if(i == 1)	temp.x = a;   //将 a 罐注满
			if(i == 2)      temp.y = b;   //将 b 罐注满
			if(i == 3)      temp.x = 0;   //将 a 罐倒出
			if(i == 4)      temp.y = 0;   //将 b 罐倒出
			if(i == 5)      //将 a 罐到入b 罐
			{
				int k = front.x + front.y;     //
				if(k <= b)
				{
					temp.y = k;
					temp.x = 0;
				}
				else
				{
					temp.y = b;
					temp.x = k - b;
				}
			}

			if(i == 6)    //将 b 到入 a 罐中
			{
				int k = front.x + front.y;
				if(k <= a)
				{
					temp.x = k;
					temp.y = 0;
				}
				else
				{
					temp.x = a;
					temp.y = k -a;
				}
			}

			if(book[temp.x][temp.y] == 0)
			{
				temp.step = front.step + 1;
				book[temp.x][temp.y] = 1;
				temp.a[temp.step] = i;    //记录操作
				s.push(temp);
			}
			
		}
	}


	printf("impossible\n");


}
