#include<cstdio>
#include<iostream>

using namespace std;

int main( )
{
	int i,j,k,l;
	cin >> i >> j >> k >> l;

	int temp = k*60+l - (i*60+j);
	cout << (temp/60) << " " << ( temp%60) << endl;
}
