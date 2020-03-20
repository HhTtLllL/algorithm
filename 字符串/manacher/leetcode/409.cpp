//##################################################################
// File Name: 409.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月19日 星期四 20时37分30秒
//=============================================================
//!/usr/bin/python
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
	public:
		void Manacher(string s,int len)
		{
			// 将字符串转变
			int l = 0;
			Ma[l++] = '$';
			Ma[l++] = '#';
			for(int i = 0;i < len;i++)
			{
				Ma[l++] = s[i];
				Ma[l++] = '#';
			}


			Ma[l] = 0;
			int mx = 0,id = 0;
			for(int i = 0;i < l;i++)
			{
				//  当 mx > i时,以 i 为中心扩展回文串
				Mp[i] = mx > i ? min(Mp[2*id - i],mx - i):1;

				if(i >= Mp[i])
				{
					while(Ma[i + Mp[i]] == Ma[i - Mp[i]])
					{
						//	if(i < Mp[i]) cout << 111 << endl;
						Mp[i]++;  // 向两边进行扩展   以 i 为中心扩展回文串,或者到达边界
					}
				}
				if(i + Mp[i] > mx)
				{
					mx = i + Mp[i];
					id = i;
				}
			}
		}


		int longestPalindrome(string s) {
			int len = s.size();
			Ma = vector<char>((len + 1)*2);
			Mp = vector<int>((len + 1 )*2);
			int ans = 0;

			Manacher(s,len);

			for(int i = 0;i < 2*len+2;i++)  ans = max(ans,Mp[i] - 1);

			//cout << ans << endl;

			return ans;

		}


	private:
		vector<char> Ma;
		vector<int> Mp; 

};


int main()
{
	Solution a;
	cout << a.longestPalindrome("aaaaa") << endl;


	return 0;
}
