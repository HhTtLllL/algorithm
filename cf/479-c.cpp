#include<cstdio>
#include<algorithm>

using namespace std;

int a[200005];
int main( )
{
	int n,k;
	scanf( "%d%d",&n,&k);

	for(int i = 1;i <= n;i++)   scanf( "%d",&a[i]);

	sort(a+1,a+n+1);
	if(n == k)
	{
		printf( "%d\n",a[k]);
		return 0;
	}
	else if(k == 0)
	{
		if(a[1] == 1)   printf( "-1\n");
		else    printf( "%d\n",a[1]-1);
		return 0;
	}
	if(a[k+1] == a[k])   printf( "-1\n");
	else  printf( "%d\n",a[k]);
}
