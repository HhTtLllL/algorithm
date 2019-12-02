/*
 *可以解决 多模板匹配 但是时间没有ac自动机 快
 *
 * */

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MAX = 1e5 + 10;

char s[MAX];
int sa[MAX],t[MAX],t2[MAX],c[MAX],n;
char vs[1000005][55];
//  c 用于基数排序，统计前缀和

//构造字符串 s 的后缀数组。每个字符值必须为0～m-1
void build_sa(int m)
{
	int i;
	int *x = t;// 用于第一关键字排序，相当于 rank 数组
	int *y = t2; // 用于第二关键字排序，保存排序结果
	//基数排序
	for(i = 0;i < m;i++) c[i] = 0;   //清空c 
	for(i = 0;i < n;i++) 
	{
		c[x[i] = s[i]]++;
	}
	for(i = 1;i < m;i++) c[i] += c[i-1];
	for(i = n-1;i >= 0;i--) sa[--c[x[i]]] = i;

	for(int k = 1;k <= n;k <<= 1)
	{
		int p = 0;	//直接利用sa数组排序第二关键字
		for(i = n-k;i < n;i++) y[p++] = i; //后面的 k 个数第二关键字为空的最小
		for(i = 0;i < n;i++) if(sa[i] >= k) y[p++] = sa[i] - k;

		//基数排序第一关键字
		for(i = 0;i < m;i++) c[i] = 0;
		for(i = 0;i < n;i++) c[x[y[i]]]++;
		for(i = 1;i < m;i++) c[i] += c[i-1];
		for(i = n-1;i >= 0;i--) sa[--c[x[y[i]]]] = y[i];  // 根据 sa和x数组计算新的 x 数组
		/*
		 * 求出 sa后，下一步是计算rank值
		 * 可能有多个字符串的rank 值是相同的，所以必须比较两个字符串是否完全相同
		 * 并且 y 数组的值已经没有必要保存，为了节省空间，这里用 y 数组保存rank值
		 * */

		
		
		
		swap(x,y);
		p = 1;
		x[sa[0]] = 0;
		for(i = 1;i < n;i++) 
			x[sa[i]] = y[sa[i-1]] == y[sa[i]] && y[sa[i-1] + k] == y[sa[i] + k] ? p-1 : p++;
		if(p >= n) break;  //以后继续倍增，sa也不会改变，退出
		m = p;   //下次基数排序的最大值
	}
}


int m; //模板长度，简单期间这里存在全局变量中
int cmp_suffix(char * pattern,int p) //判断模板s是否为后缀p的前缀
{ 
	return strncmp(pattern,s + sa[p],m);
}

int find(char* P)
{
//	m = P.size();
	m = strlen(P);
	if(cmp_suffix(P,0) < 0) return -1;
	if(cmp_suffix(P,n-1) > 0) return -1;

	int L = 0,R = n-1;
	while(R >= L)  //二分查找
	{
		int M = L + (R - L)/2;
		int res = cmp_suffix(P,M);
		if(!res) return M;
		if(res < 0) R = M-1;
		else L = M+1;
	}

	return -1; // 找不到
}


int main()
{
	int t;
	//cin >> t;
	int time = 0;
	//while(t--)
	{
		scanf("%d\n",&time);
		for(int i = 0;i < time;i++)	scanf("%s",vs[i]);

		scanf("%s",s);
		
//		scanf("%s",s);
		int len = strlen(s);
		s[len] = 0;
		n = len + 1;
		build_sa(128);
		
		char temp[1000005];
/*		for(int i = 0;i < 5;i++) 
		{
			scanf("%s",temp);
			cout << find(temp) << endl;
		}*/
		
		int sum = 0;
		for(int i = 0;i < time;i++)
		{
			if(find(vs[i]) >= 0) sum++;
		}

		cout << sum << endl;
		/*for(int i = 0;i < strlen(s) + 1;i++)
		{
			//sa[0] 为无效值
			printf("i = %d ,s[i] = %d\n",i,sa[i]);
		}*/
	}

	return 0;
}
