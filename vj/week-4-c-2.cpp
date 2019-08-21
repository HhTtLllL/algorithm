#include<cstdio>
int e;
int y;

int main( )
{
	int n;
	scanf( "%d",&n);
	for(int i = 1;i <= n;i++)
	{
		int temp;
		scanf( "%d",&temp);
		if( temp == 1)   y++;
		else    e++;
	}
	int t = n;
	int i = 1;
	if(e)
	{
		printf( "2 ");
		e--;
		i++;
	}
	if(y)
	{
		printf("1");
		if(i != n)   printf( " ");
		y--;
		i++;
	}
	while(e)
	{
		printf( "2");
		if(i != n)   printf( " ");
		e--;
		i++;
	}
	while(y)
	{
		printf( "1");
		if(i != n)   printf( " ");
		y--;
		i++;
	}
}
