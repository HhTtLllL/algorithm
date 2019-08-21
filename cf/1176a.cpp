#include<iostream>

using namespace std;

int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		int time = 0; //用来记录次数
		while(n != 1)
		{
			int flag = 0;//用来判断能否被 2,3,5 整除
			if(n % 2 == 0)
			{
				n /= 2;
				flag = 1;
				time++;
			}
			else if(n % 3 == 0)
			{
				flag = 1;
				n /= 3;
				n *= 2;
				time++;
			}
			else if(n % 5 == 0)
			{
				flag = 1;
				n /= 5;
				n *= 4;
				time++;
			}

			if(flag == 0)
			{
				if(n != 1)
				{
					cout << -1 << endl;
					break;
				}
			}
		}

		if(n == 1)  cout << time << endl;

	}
}
