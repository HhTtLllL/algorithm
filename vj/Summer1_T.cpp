#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a,b;
	while(cin >> a >> b && a)
	{
		if(!(a%2 == 0 || b%2 == 0) ) cout << "What a pity!" << endl;
		else cout << "Wonderful!" << endl;
	}
	return 0;
}
