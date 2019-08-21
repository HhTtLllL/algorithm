#include<iostream>
#include<cstring>

using namespace std;

int book[30];
char a[510];
int main()
{
	scanf( "%s",a);
	int len = strlen(a);
	int temp = 97;
	for(int i = 0;i < len;i++)
	{
		if(a[i] == temp)	temp++;
		else if( a[i] < temp) continue;
		else 
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}
