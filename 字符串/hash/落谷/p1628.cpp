#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>

#define MOD 0x7FFFFFFF

using namespace std;

string a[100010];
int cmp(char a[105],char b[105])
{
	/*if(strcmp(a,b) < 0) return 1;
	else return 0;*/
	return 1;
}

int seed = 131;

int front_hash(string s,int len)
{
	unsigned int hash = 0;
	int i = 0;
	while(s[i])	
	{
		hash = hash*seed + s[i++];
		if(i == len) break;
	}
	return (hash & MOD);
}


int main()
{

	int n;
	string temp;
	scanf("%d",&n);
	getchar();

	for(int i = 0;i < n;i++) cin >> a[i];

	sort(a,a + n);
	cin >> temp;
	int len = temp.size();
	int temp1 = front_hash(temp,len);
	
	for(int i = 0;i < n;i++)
	{
		if(temp1 == front_hash(a[i],len))  cout << a[i] << endl;
	}


	return 0;


}
