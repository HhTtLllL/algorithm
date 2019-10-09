#include <iostream>
#include <cstdio>
#include <cstring>

#define ll long long

using namespace std;

string a,b;
int lena,lenb;
int fronta[85],backa[85];
int frontb[85],backb[85];
int ans;
int maxx;

int front_insert_hash(string s,int len)  //计算前缀hash
{
	int seed = 131;
	ll sum = 0;  //初始化 hash 的值
	for(int i = 0;i < len;i++)	sum = sum*seed + s[i]; //计算hash 值

	return (sum&0x7FFFFFFF);
}

int back_insert_hash(string s,int len) // 计算后缀hash
{
	int seed = 131;
	ll sum = 0;
	int lenn = s.size(); // lenn是字符串总长度
	for(int i = lenn - len;i < lenn;i++)  //注意这里的len是从后往前数的第几位数
	{
		sum = sum*seed + s[i] ; //计算hash 值
	}

	return (sum&0x7FFFFFFF);
}

int main()
{
	cin >> a >> b;
	lena = a.size(); 
	lenb = b.size();

	for(int i = 0;i < lena;i++)   fronta[i] = front_insert_hash(a,i); // 字符串 a 的前缀 hash 值

	for(int i = 0;i < lena;i++)   backa[i] = back_insert_hash(a,i);
	for(int i = 0;i < lenb;i++)   frontb[i] = front_insert_hash(b,i);
	for(int i = 0;i < lenb;i++)   backb[i] = back_insert_hash(b,i);

	
	int minlen = min(lena,lenb);
	for(int i = 0;i < minlen;i++)	if(fronta[i] == backb[i]) ans = i;
	
	maxx = max(maxx,ans);

	for(int i = 0;i < minlen;i++)   if(frontb[i] == backa[i]) ans = i;

	maxx = max(maxx,ans);

	cout << maxx << endl;


	return 0;
}
