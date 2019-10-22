#include <cstdio>
#include <cstring>

int N,c[50005];
int lowbit(int i)
{
	return (i&(-i));
}

void updata(int i,int value)
{
	while(i <= N)
	{
		c[i] += value;
		i += lowbit(i);
	}
}

int sum(int i)
{
	int sum = 0;
	while(i > 0)
	{
		sum += c[i];
		i -= lowbit(i);
	}
	return sum;
}

int main()
{
	int t,Case = 1,d;
	scanf("%d",&t);
	while(t--)
	{
		printf("Case %d:\n",Case++);
		scanf("%d",&N);
		memset(c,0,sizeof(c));
		for(int i = 1;i <= N;i++)
		{
			scanf("%d",&d);
			updata(i,d);
		}
		char command[15];
		int x,y;
		while(~scanf("%s",command) && command[0] != 'E')
		{
			scanf("%d%d",&x,&y);
			if(command[0] == 'Q')
			{
				printf("%d\n",sum(y) - sum(x - 1));
			}
			if(command[0] == 'A')
			{
				updata(x,y);
			}
			else if(command[0] == 'S')
			{
				updata(x,-y);
			}
		}
	}
	return 0;

}
