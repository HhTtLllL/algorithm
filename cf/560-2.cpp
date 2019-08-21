#include<cstdio>
#include<algorithm>

using namespace std;
int a[200005];
int main( )
{
	int n;
	scanf( "%d",&n);
	for(int i = 0;i < n;i++)   scanf( "%d",&a[i]);
	sort(a,a+n);
	int i = 0;
	int j = 0;   
	int sum1 = 0;
	while(j < n)
	{
		if(i < a[j])
		{
			i++;
			j++;
			sum1++;
		}
		else
		{
			j++;
		}

	}

	printf( "%d\n",sum1);
}
