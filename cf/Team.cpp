#include<iostream>

using namespace std;

int main( )
{
	int n,a,b,c;

	cin >> n;
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		int temp = 0;
		cin >> a >> b >> c;
		if(a == 1)  temp++;
		if(b == 1)  temp++;
		if(c == 1)  temp++;

		if(temp >= 2) sum++;
	}

	cout << sum << endl;
}
