#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

struct node 
{
	int a;
	int b;
	int c;
	int step;
};

int book[105][105];
int main( )
{
	int a,b,c;
	while((scanf( "%d%d%d",&c,&a,&b)),c || a || b)
	{
		if(c%2)
		{
			printf( "NO\n");
			continue;
		}
		if(a < b)   swap(a,b);
		int flag = 0;
		memset(book,0,sizeof(book));
		struct node temp;
		queue<node> s;
		temp.a = 0;
		temp.b = 0;
		temp.c = c;
		book[a][b] = 1;
		temp.step = 0;
		s.push(temp);
		while(!s.empty( ))
		{
			struct node front;
			front = s.front( );
			if(front.a == c/2 && front.c == c/2)
			{
				printf( "%d\n",front.step);
				flag = 1;
				break;
			}
			for(int i = 0;i < 6;i++)   //每一步都有6个选择
			{
				// c  ->  a
				if(front.c != 0 && front.a != a)
				if(i == 0)
				{
					int s = a - front.a;
					if(front.c >= s )
					{
						temp.a = a;
						temp.c = front.c - s;
						temp.b = front.b;
					}
					else
					{
						temp.a = front.a + front.c;
						temp.c = 0;
						temp.b = front.b;
					}
				}
				//c -> b
				if(front.c != 0 && front.b != b)
				if(i == 1)
				{
					int s = b - front.b;     //剩余空间
					if(front.c >= s)
					{
						temp.b = b;
						temp.c = front.c - s;
						temp.a = front.a;
					}
					else
					{
						temp.b = front.b + front.c;
						temp.c = 0;
						temp.a = front.a;
					}
				}

				//a   -> b
				if(front.a != 0  && front.b != b)
				if(i == 2)
				{
					int s = b - front.b;
					if(front.a >= s)
					{
						temp.a = front.a - s;
						temp.b = b;
						temp.c = front.c;
					}
					else
					{
						temp.b = front.a + front.b;
						temp.a = 0;
						temp.c = front.c;
					}
				}
				//a   -> c
				if(front.a != 0 && front.c != c)
				if(i == 3)
				{
					int s = c - front.c;
					if(front.a >= s)
					{
						temp.a = front.a - s;
						temp.b = front.b;
						temp.c = c;
					}
					else
					{
						temp.a = 0;
						temp.c = front.c + front.a;
						front.b = front.b;
					}
				}

				// b   ->    a
				if(front.b != 0 && front.a != a)
				if(i == 4)
				{
					int s = a - front.a;
					if(front.b >= s)
					{
						temp.a = a;
						temp.b = front.b - s;
						temp.c = front.c;
					}
					else
					{
						temp.b = 0;
						temp.c = front.c;
						temp.a = front.a + front.b;
					}
				}

				//b    ->   c
				if(front.b != 0 && front.c != c)
				if(i == 5)
				{
					int s = c - front.c;
					if(front.b >= s)
					{
						temp.c = c;
						temp.b = front.b - s;
						temp.a = front.a;
					}
					else
					{
						temp.c = front.c + front.b;
						temp.a = front.a;
						temp.b = 0;
					}
				}

				if(book[temp.a][temp.b] == 0)
				{
					book[temp.a][temp.b] = 1;
					temp.step = front.step + 1;
					s.push(temp);
				}
			}
			s.pop( );
		}
		if(flag == 0)
			printf( "NO\n");


	}
}
