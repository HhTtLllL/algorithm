#include<cstdio>
#include<cstring>
char a[2000000];
char b[2000000];
int main( )
{
	int sum = 0;
	int temp = 0;
	scanf( "%s",a);
	scanf( "%s",b);
	int lena = strlen(a);
	int lenb = strlen(b);
	int temp1 = lena;
	int temp2 = lenb;
	while(1)
	{
		if(a[temp1-1] == b[temp2-1])
		{
			temp++;
			temp1--;
			temp2--;
		}
		else
		{
			break;
		}
		if(temp1 <= 0 || temp2 <= 0)
		{
			break;
		}
	}
	printf( "%d",(lena+lenb) - 2*temp);
}
