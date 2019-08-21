#include<iostream>

using namespace std;

int a[1010];
int main()
{
	int t;
	while(cin >> t && t)
	{
		for(int i = 1;i <= t;i++)	cin >> a[i];
		for(int i = 2;i <= t;i++)	a[1] ^= a[i];
		if(a[1])   cout << "Rabbit Win!" << endl;
		else cout << "Grass Win!" << endl;
	}

	return 0;
}
