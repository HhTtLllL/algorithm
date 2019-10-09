// 超时

#include <iostream>
#include <cstring>
#define ll long long
#define MOD 0x7FFFFFFF

using namespace std;

const int MIN = 10000 + 10;
const int MAX = 1000000 + 10;
//int fronta[MIN];
ll frontb[MAX];
char a[MIN];
char b[MAX];

const int seed = 131;

int front_hash(char s[],int len)
{
//	int lentemp = strlen()
	ll sum = 0;
	for(int i = len - strlen(a) + 1;i <= len;i++) sum = sum*seed + s[i];
	return (sum & MOD);
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
//		cin >> a >> b;
		
		scanf("%s%s",a,b);
		memset(frontb,0,sizeof(frontb));
		ll temp = front_hash(a,strlen(a) - 1);
		int lenb = strlen(b);
	//	cout << "temp " << temp << endl;
//		for(int i = 0;i < a.size();i++)	fronta[i] = front_hash(i);
		for(int i = 0;i < lenb;i++) frontb[i] = front_hash(b,i);
		ll sum = 0;
		for(int i = 0;i < lenb;i++)
		{
	//		cout << "fro" << i << "=" << frontb[i] << endl;
			if(frontb[i] == temp) sum++;
		}

		cout << sum << endl;
	}

	return 0;
}
