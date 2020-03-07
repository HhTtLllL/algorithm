//##################################################################
// File Name: 20.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月07日 星期六 22时03分03秒
//=============================================================
//!/usr/bin/python
class Solution {
	public:
		bool isValid(string s) 
		{
			if( s.empty() ) return true;
			stack<char> record;
			char ch;
			record.push(s[0]);
			for( int i  = 1 ; i < s.size() ; i ++ )
			{
				if( s[i] == '(' || s[i] == '[' || s[i] == '{') record.push( s[i] );
				else 
				{
					if(record.empty()) return false;
					if(s[i] == ']')
					{
						if( (ch =  record.top()) && ch != '[' ) return false;
						else record.pop();
					}
					else if( s[i] == ')') 
					{
						if( (ch = record.top())  && ch != '(') return false;
						else record.pop();
					}
					else if( s[i] == '}')
					{
						if( (ch = record.top()) && ch != '{') return false;
						else record.pop();
					}
				}
			}

			if(record.empty()) return true;
			else return false;

		}
};
