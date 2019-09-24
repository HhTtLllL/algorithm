#include <iostream>
#include <stack>
#include <string.h>
#include <map>

using namespace std;

const int MAX = 1000;
char a[MAX];
char b[MAX];
map<char,int> p;

stack <char> s;
stack <char> post;

int main()
{
	cin >> a;

	p['+'] = p['-'] = 1;
	p['*'] = p['/'] = 2;

	for(int i = 0;i < strlen(a);i++)
	{
		if(a[i] == '(')	s.push(a[i]);
		else if (a[i] == ')') 
		{
			while(s.top() != '(' && !s.empty())
			{
				cout << s.top();
				s.pop();
			}
			s.pop();  //弹出做括号

		}
		else if(a[i] == '+' || a[i] == '-' || a[i] == '/' || a[i] == '*')
		{
			while(!s.empty() && p[s.top()] >= p[a[i]])
			{
				cout << s.top();
				s.pop();
			}
			s.push(a[i]);
		}
		else 	cout << a[i];
	}
		while(!s.empty())
		{
			cout << s.top();
			s.pop();
		}
	return 0;
}

