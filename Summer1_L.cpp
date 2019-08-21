#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,suma = 0;
		cin >> n;
		int sg = 0;
		for(int i = 1;i <= n;i++)
		{
			int temp;
			cin >> temp;
			if(temp == 1) suma++;
			sg ^= temp;
		}

		if((suma == n && suma%2 == 0) || (suma != n && sg != 0))    cout << "John" << endl;
		else cout << "Brother" << endl;
	}

	return 0;

}
