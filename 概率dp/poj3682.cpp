#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

const int MAX = 1000 + 10;

double a[MAX];
double b[MAX];
int main() 
{
	int k;
	double p;
	while(cin >> k && k != 0 &&  cin >> p)
	{
		memset(a,0,sizeof(a));
		memset( b,0,sizeof(b));
		for(int i = 1;i <= k;i++)
		{
			a[i] = a[i-1] + 1.0/p;
		}

		for(int i = 1;i <= k;i++)
		{
			b[i] = (p*(b[i - 1] + 2 * (a[i - 1] + 1) - 1) + (1-p) * ( 2 *(a[i] + 1) - 1))/p;
		}


		printf("%.3lf ",a[k]);
		printf("%.3lf\n",b[k]);
	}



	return 0;
}
