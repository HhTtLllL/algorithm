#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

struct node
{
	int start;
	int end;
};

struct node a[100005];
int book[100005];

int cmp(struct node a,struct node b)
{
	return a.start < b.start;
}

int main( )
{
	int T;
	cin >> T;
	while(T--)
	{
		memset(book,0,sizeof(book));
		int len;
		cin >> len;
		int i = 1;
		int tempstart,tempend;
		while(cin >> tempstart >> tempend && (tempstart || tempend))
		{
			if(tempend <= 0 || tempstart >= len)  continue;
			a[i].start = tempstart;
			a[i].end = tempend;
			i++;
		}
		sort(a+1,a+i,cmp);
		if(a[1].start > 0)
		{
			cout << 0 << endl;
			continue;
		}
		int temp = 0,tempmax = 0,coordinate;
		int t = -1;   //用来备份起点相同 的上一个 区间
		for(int j = 1;j < i;j++)
		{
			if(a[j].start <= temp)
			{
				if(a[j].end > tempmax)
				{
					book[j] = 1;
					if(t != -1)   book[t] = 0;
					tempmax = a[j].end;
					t = j;
				}
			}
			else
			{
				temp = tempmax;
				t = -1;
				j--;
			}
			if(tempmax >= len)  break;
		}

		if(tempmax < len)
		{
			cout << 0 << endl;
			continue;
		}

		int cnt = 0;
		for(int j = 1;j < i;j++)	if(book[j]) cnt++;

		

		cout << cnt << endl;
			for(int j = 1;j < i;j++)
			{
				if(book[j])
				{
					cout << a[j].start << " " << a[j].end << endl;
				}
			}

	}

	return 0;
}
