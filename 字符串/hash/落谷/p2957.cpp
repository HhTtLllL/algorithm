// a=s.substr（n,m）：截取字符串s中从第n位开始的长度为m的字符串并赋给a
//
// s.find（n）：返回字符串n在s中的位置，如果没有找到，则返回-1
#include <iostream>

using namespace std;

string a;
string b;

int main()
{

	cin >> a >> b;

	for(int i = a.size() - 1;i >= 0;i--)  // i 代表回声的长度
	{
		for(int j = 0;j <= a.size() - i;j++)
		{
			string c = a.substr(j,i);
			//因为从 后往前找,第一个找到的就是 最大的
			if(b.find(c) != -1) //如果找到了，则输出i
			{
				cout << i << endl; 
				return 0;
			}
		}
	}
	
	return 0;
}
