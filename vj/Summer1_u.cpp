#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	double n;
	while(~(scanf( "%lf",&n)))
	{
		while(n > 18)	n /= 18;

		if(n > 9)  cout << "Ollie wins" << endl;
		else cout << "Stan wins" << endl;
	}

	return 0;
}
