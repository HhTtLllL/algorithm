#include<iostream>

using namespace std;
int a[10005];
int b[10005];
int main()
{
	int n,m,z;
	cin >> n >> m >> z;
	int i = 0;
	int j = 0;
	while(1)
	{
		i += n;
		a[i] = 1;
		if(i >= z) break;
	}
	while(1)
	{
		j += m;
		b[j] = 1;
		if(j >= z) break;
	}
	/*for(i = 1;i <= z;i++)  cout << a[i] << " ";
	cout << endl;
	for(i = 1;i <= z;i++)  cout << b[i] << " ";
*/
	int sum3 = 0;
	for(i = 1;i <= z;i++)
	{
		if(a[i] == 1 && b[i] == 1) sum3++;
	}

	cout << sum3 << endl;
}
