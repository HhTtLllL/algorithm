// 注意 有 全是空格的情况  
//
//样例:
//you are my friend(4)
//you are     my friend(4)
//       you are my friend(4)
//you are my friend                   (4)

#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>

#define ll long long
#define MOD 0x7FFFFFFF

using namespace std;

const int MIN = 100 + 10;
const int MAX = 100000 + 10;

ll frontb[MAX];
char a[MAX][MIN];

const int seed = 13331;
int front_hash(char s[])
{
	unsigned int hash = 0;
	int i = 0;
	while(s[i])
	{
		hash = hash * seed + s[i++];
	}

	return (hash & MOD);
}

int main()
{
	string b;
	char temp[100005];
	int i = 0;
	while(getline(cin,b) && b != "#")
	{
		memset(frontb,0,sizeof(frontb));
		memset(a,0,sizeof(a));

		set<int> s;
/*		scanf("%s",a[i]);
		if(a[i][0] == '#') break;
		i++;*/
		int j = 0;
		int k = 0;
		int flag = 0;
		for(int i = 0;i < b.size();i++)
		{
			if(flag == 0 && b[i] == ' ') continue;
			if(b[i] != ' ')
			{
				flag = 1;
				a[j][k++] = b[i];
			}
			else if(b[i] == ' ' && (b[i+1] >= 97 && b[i+1] <= 122))
			{
				j++;
				k = 0;
			}
		}

		for(k = 0;k <= j;k++)
		{
			frontb[k] = front_hash(a[k]);
			s.insert(frontb[k]);
		}
		if(flag == 0) cout << 0 << endl;
		else	cout << s.size()<< endl;
	}



/*	sort(frontb,frontb + i);
	int sum = 0;
	for(int j = 0;j < i;j++)
	{
		if(frontb[j] != frontb [j + 1]) sum++;
	}
*/



}
