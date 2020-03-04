//##################################################################
// File Name: template.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月04日 星期三 15时24分51秒
//=============================================================
//!/usr/bin/python

#include <iostream>
//循环不变量

using namespace std;

/* 注意:
 *     明确变量的含义
 *     循环不变量
 *     小数据量调试, 空集，
 *     大数据量调试
 * */




//T 为带查找数组，长度为 n，target 为待查找元素
template< typename T>
int binarySearch( T arr[],int n,T target)
{
	//声明变量时，一定要确定变量的意义，此处认为 l,r 为数组的下标
	int l = 0,r = n - 1;//在[l...r]的范围里寻找 target
	//在变量的书写的过程中，一定要维护这个变量的意义 --循环不变量
	while(l <= r) //当l == r时，区间[l...r]依然是有效的
	{
		int mid = (l + r)/2;

		if(target == arr[mid])
			return mid;
		if(target > arr[mid])
		{
			l = mid + 1; //target 在[mid + 1 ... r]中
		}
		else if(target < arr[mid])
		{
			r = mid - 1; //target 在[l .. mid - 1] 中
		}
	}

	return -1;
}

//当改变变量的意义后，令 r = n
template< typename T>
int binarySearch( T arr[],int n,T target)
{
	int l = 0,r = n;//在[l...r)的范围里寻找 target
	while(l < r) //当l == r时，区间[l...r] 依然是无效的
	{
		//int mid = (l + r)/2;  //当l 和 r 都足够大的时候，r + l可能会产生整形溢出
		int mid = l + (r - l)/2;
		if(target == arr[mid])
			return mid;
		if(target > arr[mid])
		{
			l = mid + 1; //target 在[mid + 1 ... r)中
		}
		else if(target < arr[mid])
		{
			r = mid; //target 在[l .. mid) 中
		}
	}

	return -1;
}



int main()
{

	return 0;
}
