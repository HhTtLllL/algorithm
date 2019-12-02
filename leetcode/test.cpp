#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x = -112;
	string s = to_string(x);
	cout << s << endl;
	for(auto i : s) cout << i << endl;


	return 0;
}
