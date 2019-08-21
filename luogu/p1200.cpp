#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int c[10];
int d[10];
int main( )
{
	string a;
	string b;
	cin >> a >> b;
	int len1 = a.length( );
	int len2 = b.length( );
	int temp1 = 1,temp2 = 1;
	for(int i = 0;i < len1;i++) 
	{
		c[i] = a[i] - 64;
		temp1 *= c[i];
	}
	for(int i = 0;i < len2;i++) 
	{
		d[i] = b[i] - 64;
		temp2 *= d[i];
	}
	if(temp1%47 == temp2%47) cout << "GO";
	else  cout << "STAY" << endl;
}
