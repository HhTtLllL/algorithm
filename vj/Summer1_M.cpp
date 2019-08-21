#include<iostream>

using namespace std;

int a[110];

int main()
{
	int n;
	while(cin >> n && n)
	{
		int cnt = 0;
		int temp = 0;
		for(int i  = 1;i <= n;i++)    
		{
			cin >> a[i];
			temp ^= a[i];
		}

		if(!temp)
		{
			cout << "0" << endl;
			continue;
		}
		else
		{
			for(int i = 1;i <= n;i++)
			{
				if((a[i] ^ temp) < a[i])
				{
					cnt++;
				}
			}

			cout << cnt << endl;
		}

	}
}
