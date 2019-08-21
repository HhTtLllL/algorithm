#include<iostream>

using namespace std;

int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		int sum,temp;
		cin >> sum >> temp;
		if(sum % (temp+1))   cout << "first" << endl;
		else cout << "second" << endl;
	}
}
