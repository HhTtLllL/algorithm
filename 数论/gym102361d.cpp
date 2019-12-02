#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int temp1;
		int temp2;
		temp1 = n%2;
		temp2 = temp1/5;
		if(temp1 == 0 || temp2 == 0)
		{
			printf("Yes\n");
			continue;
		}

		if(2*5*temp2 == n) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
