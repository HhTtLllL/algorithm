#include<cstdio>

using namespace std;

int a[200005];
int main( )
{
	int n;
	scanf( "%d",&n);

	for(int i = 1;i <= n;i++)    scanf( "%d",&n);
	int sum = a[1];
	int i = 1,j = 1;
	int m = a[1];
	while(i <= j && j <= n)
	{
		if(sum > m)
		{
			if(sum > m)    m = sum;
			sum -= a[i];
			i++;
		}
		else
		{
			j++;
			sum += a[j];
		}
	}

	printf( "%d\n",m);

}
