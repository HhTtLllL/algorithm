#include<iostream>

using namespace std;

int a[100];
long long temp;
int getfib();
int main()
{
	int n;
	getfib();
	while(cin >> n && n)
	{
		int flag = 1;
		for(int i = 1;i <= 47;i++)	
		{
			if(n == a[i])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)  cout << "First win" << endl;
		else cout << "Second win" <<endl;
	}
}

int getfib()
{
	a[1] = 1;
	a[2] = 1;
	int i = 3;
	while(1)
	{
		a[i] = a[i-1] + a[i-2];
		i++;
		if(i > 47)  break;
	}

	return 0;
}
