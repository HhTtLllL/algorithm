//##################################################################
// File Name: priority_queue.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月08日 星期日 17时32分53秒
//=============================================================
//!/usr/bin/python
#include <iostream>
#include <queue>
#include <ctime>
#include <functional>

using namespace std;

bool myCmp( int a,int b)
{
	return a%10 < b%10;
}

int main()
{
	srand( time( NULL ) );
	//默认情况下,使用的最大堆
	priority_queue<int> pq;
	
	for( int i  = 0 ; i < 10 ; i ++ )
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

	cout << endl << endl;

	//最小堆
	//第一个为数据类型,第二个为底层的数据类型的实现,第三个为比较函数
	priority_queue<int,vector<int>,greater<int> > pq2;
	
	for( int i  = 0 ; i < 10 ; i ++ )
	{
		int num = rand()%100;
		pq2.push( num );
		cout << "insert " << num << " in priority queue " << endl;
	}

	while( !pq2.empty() )
	{
		cout << pq2.top() << " ";
		pq2.pop();
	}


	//使用自定义Comparator 的priority queue
	priority_queue<int, vector<int>,function<bool (int,int)> > pq3( myCmp);
	
	for( int i  = 0 ; i < 10 ; i ++ )
	{
		int num = rand()%100;
		pq3.push( num );
		cout << "insert " << num << " in priority queue " << endl;
	}

	while( !pq3.empty() )
	{
		cout << pq3.top() << " ";
		pq3.pop();
	}

}
