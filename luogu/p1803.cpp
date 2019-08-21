#include<cstdio>
#include<algorithm>

using namespace std;
int cmp(int b[3],int c[3])
{
	return b[2] < c[2];
}
int a[1000009][3];
int main( )
{
	int n;
	int sum1 = 1;
	scanf( "%d",&n);
	for(int i = 1;i <= n;i++)   scanf( "%d%d",&a[i][1],&a[i][2]);

	sort(a+1,a+n+1,cmp);
	int min1;
	min1 = a[1][2];
	int i = 2;
	while(i <= n)
	{
		if(a[i][1] > min1)
		{
			sum++;
			min1 = a[i][2];
		}

	}

	printf( "%d",sum);
}
