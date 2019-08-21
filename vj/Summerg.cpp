#include<iostream>
#include<algorithm>

using namespace std;

int a[10];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)   cin >> a[i];

	sort(a+1,a+1+n);

	if(n == 1)   printf( "%d\n",a[1]);
	else if(n == 3)	printf( "%d\n",a[2]);
	else if(n == 5)   printf( "%d\n",a[3]);

}
