#include <stdio.h>

int a[100];
int main()
{
	int n = 9;
	int sum = 0;
	for(int i = 0;i < n;i++)
	{
		int temp;
		scanf("%d",&temp);
		sum ^= temp;
	}
	printf("%d\n",sum);

	return 0;
}
