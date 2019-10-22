#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX = 1e6 + 10;

char a[MAX];

int main()
{
		int sum = 0;

	while(scanf("%s",a) != EOF)
	{
		int len = strlen(a);
		for(int i = 0;i < len - 3;i++)
		{
			if((a[i] == 'd' || a[i] == 'D') && (a[i+1] == 'o' || a[i+1] == 'O') && (a[i+2] == 'g' || a[i+2] == 'G') && (a[i+3] == 'E' || a[i + 3] == 'e'))       sum++;
		}
	}
	printf( "%d\n",sum);

	return 0;
}
