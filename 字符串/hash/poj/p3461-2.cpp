#include <iostream>
#include <stdio.h>
#include <cstring>

#define ull unsigned long long

using namespace std;

const int MAX = 1e6 + 10;

ull xp[MAX],hash_1[MAX],hash_2[MAX];
char str[MAX],str2[MAX];
void init()
{
	xp[0] = 1;
	for(int i = 1;i < MAX;i++) xp[i] = xp[i - 1]*13331;
}

ull get_hash(int i,int l,ull hash_3[])
{
	return hash_3[i] - hash_3[i + l]*xp[l];
}

int make_hash(char s[],ull hash_3[])
{
	int len = strlen(s);
	hash_3[len] = 0;
	for(int i = len - 1;i >= 0;i--)
	{
		hash_3[i] = hash_3[i+1]*13331 + s[i];
	}
	return len;
}

int main()
{
	init();
	int t;
	cin >> t;
	while(t--)
	{
		int ans = 0;
		scanf("%s%s",str,str2);
	//	cin >> str >> str2;

		int len1 = make_hash(str,hash_1);
		int len2 = make_hash(str2,hash_2);
		ull tmp = get_hash(0,len1,hash_1);

		for(int i = 0;i < len2 - len1 + 1;i++)
		{
			if(get_hash(i,len1,hash_2) == tmp) ans++;
		}

		cout << ans << endl;
	}

	return 0;
}
