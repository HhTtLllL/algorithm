//##################################################################
// File Name: priority_queue.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月27日 星期五 19时12分38秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <queue>
#include <ctime>

using namespace std;

int main()
{
	srand( time(NULL) );  //设置随机种子
	priority_queue<int> pq;   //默认为最大堆

	for( int i = 0 ; i < 10 ; i ++ )
	{
		int num = rand()%100;
		pq.push( num );
		cout << "insert " << num << " in priority queue " << endl;
	}

	while( !pq.empty() )
	{
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;

	//底层实现为最小堆
	//vector 为底层支架
	priority_queue<int , vector<int>, greater<int> > pq2;

	 //使用自定义比较函数的优先队列
	 priority_queue<int , vector<int>, function<bool(int,int)> > pq3(cmp);







}
