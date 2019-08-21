#include<cstdio>

using namespace std;

int time;
int n;
int flag;
void dfs(long long  num,int time);
int main( )
{
	scanf( "%d",&n);
	while(n != 0)
	{
		dfs(1,1);
		scanf( "%d",&n);
		flag = 0;
	}
	
}

void dfs(long long  num,int time)
{
	if(num % n == 0)
	{
		if(flag == 0)
			printf( "%lld\n",num);
		flag++;
		return ;
	}
	if(time == 19)   return ;

	dfs(num*10,time+1);
	dfs(num*10+1,time+1);
}
