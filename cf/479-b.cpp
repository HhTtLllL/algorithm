#include<cstdio>

using namespace std;

char a[1005];
char b[1005][20];
int c[1005];
int judge(char ch,char sh);
int main( )
{
	int n;
	scanf( "%d",&n);
	while(getchar( ) != '\n');
	
	for(int i = 0;i < n;i++)   scanf( "%c",&a[i]);
//	scanf("%s",a);
/*	if(n == 2)
	{
		printf( "%c%c\n",a[0],a[1]);
		return 0;
	}*/
	int t = 0;
	for(int i = 0;i < n - 1;i++)
	{
		int x = judge(a[i],a[i+1]);
		if(x >= 0)
		{
			c[x]++;
		}
		else
		{

			b[t][0] = a[i];
			b[t][1] = a[i+1];
			t++;
		}
	}
/*	for(int i = 0;i <= t;i++)
	{
		printf( "%c%c\n",b[i][0],b[i][1]);
	}
	for(int i = 0;i <= 105;i++)    printf( "%d ",c[i]);
*/

	int max = 0;
	int temp = 0;
	for(int i = 0;i <= 105;i++)
	{
		if(c[i] > max)
		{
			max = c[i];
			temp = i;
		}
	}

	printf( "%c%c\n",b[temp][0],b[temp][1]);
	
}


int judge(char ch,char sh)
{
	for(int i = 0;i <= 105;i++)
	{
		if(b[i][0] == ch && b[i][1] == sh)
		{
			return i;
		}
	}

	return -1;
}
