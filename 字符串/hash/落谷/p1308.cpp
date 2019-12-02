#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstring>

#define MOD  0x7FFFFFFF


using namespace std;

const int seed = 13331;

int front_hash(char s[])
{
	unsigned int hash = 0;
	int i = 0;
	while(s[i]) hash = hash*seed + s[i++];

	return (hash & MOD);
}

int main()
{
	string s2;
	int pos = 0;
	int sum = 0;
	char s1[30];
	cin >> s1;
	getchar();
	int i = 0;
	while(s1[i])
	{
		s1[i] = toupper(s1[i]);
		i++;
	}
	int frist_hash = front_hash(s1);
	getline(cin,s2);
	
	for(int i = 0;i < s2.size();i++)
	{
		//判断边界
		while(i < s2.size() && s2[i] == ' ') i++; //去掉多余空格
		char s3[30];
		memset(s3,0,sizeof(s3));

		int j = 0;
		int temp = i;  //记录单词 首字母的位置
		//判断边界
		while(i < s2.size() && s2[i] != ' ')
		{
			s3[j++] = toupper(s2[i++]);
		}
		int second_hash = front_hash(s3);
		if(frist_hash == second_hash)
		{
			sum++;
			if(sum == 1) pos = temp;
		}
	}

	if(sum)
	{
		cout << sum << " " << pos << endl;
	}
	else cout << -1 << endl;
	
	return 0;
}
