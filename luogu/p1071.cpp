#include<cstdio>
#include<cstring>

using namespace std;
char a[105];
char b[105];
char c[105];
char temp_a[27][3];
char temp_b[27][3];
int main( )
{
	int i;
	scanf( "%s",a);
	scanf( "%s",b);
	scanf( "%s",c);
	int len_a = strlen(a);
	int len_b = strlen(b);
	int len_c = strlen(c);
	if(len_b < 26)
	{
		printf( "Failed");
		return 0;
	}

	for(i = 0;i < len_a - 1;i++)
	{
		for(int j = 1;j < len_a;j++)
		{
			if(b[i] != b[j])
			{
				if(a[i] == a[j])
				{
					printf( "Failed");
					return 0;
				}

			}
			if(a[i] != a[j])
			{
				if(b[i] == b[j])
				{
					printf( "Failed");
					return 0;
				}
			}

		}
	}

	for(i = 0;i < len_c;i++)
	{
		for(int j = 0;j < len_a;j++)
		{
			if(c[i] == a[j])
			{
				putchar(b[j]);
				break;
			}
		}
	}




}
