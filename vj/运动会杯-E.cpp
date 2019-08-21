#include<cstdio>
#include<cmath>
int main( )
{
	double len;
	double a,b;
	scanf( "%lf%lf%lf",&len,&a,&b);
	a = a/(a+b);

	printf( "%lf",a*len);
}
