#include<iostream>


using namespace std;

int main( )
{
	int n;
	cin >> n;
	if(n > 36)   
	{
		cout << -1 << endl;
		return 0;
	}

	if(n%2 == 0)
	{
		for(int i = 1;i <= n/2;i++)
		{
			cout << '8';
		}
		cout << endl;
	}
	else
	{
		for(int i = 1;i <= n/2;i++)
		{
			cout << '8';
		}
		cout << '6' << endl;
	}

	return 0;

}
