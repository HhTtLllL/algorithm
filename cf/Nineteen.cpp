#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

char s[105];
//nineteen
int main( )
{
	int n = 0,i = 0,e = 0,t = 0;
	scanf( "%s",s);

	for(int j = 0;j < strlen(s);j++)
	{
		if(s[j] == 'n')   n++;
		else if(s[j] == 'i')  i++;
		else if(s[j] == 'e')   e++;
		else if(s[j] == 't')   t++;
	}

	e = e/3;
	n = (n - 1)/2;
	printf( "%d\n",min(min(n,e),min(t,i)));
}
