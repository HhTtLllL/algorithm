#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

struct node
{
	int java;
	int fat;
	double effect;
};
struct node a[1005];

int cmp(struct node a , struct node b)
{
	return a.effect > b.effect;
}
int main( )
{
	int sum,n;
	while(cin >> sum >> n )
	{
		if(sum == -1) break;
		memset(a,0,sizeof(a));
		double get = 0;
		for(int i = 1;i <= n;i++)
		{
			cin >> a[i].java >> a[i].fat;
			a[i].effect = (1.0*a[i].java) / (1.0*a[i].fat);
		}

		sort(a+1,a+1+n,cmp);
		int i = 1;
		while(sum != 0 && i <= n)
		{
			if(sum >= a[i].fat)
			{
				sum -= a[i].fat;
				get += a[i].java;
				i++;
			}
			else
			{
				double temp = (1.0*sum) / (1.0*a[i].fat);
				get += (temp*a[i].java);
				sum = 0;
			}
		}

		printf( "%.3lf\n",get);
	}


}
