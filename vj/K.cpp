//##################################################################
// File Name: K.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月02日 星期日 13时54分27秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

string a[20];
int size[20];

bool equal()
{
	for(int i = 0 ; i < 13 ; i ++ ){
	
		if(a[i][1] != a[i+1][1]) return false;
	}


	return true;
}

bool jiulianbaodeng()
{
	int equal[10] = {0};

	sort(a,a + 14);

	//for( int i = 0 ; i < 14 ; i ++ ) cout << a[i] << endl;
	for(int i = 0 ; i < 14 ; i ++ )
	{
		equal[a[i][0] - '0']++;
	}


	//for( int i = 1 ; i < 10 ; i ++ ) cout << equal[i] << endl;
	
	int flag = 0;
	for(int i = 2 ; i < 9 ; i ++ )
	{
		if(equal[i] == 0) flag = 1;
	}

	if(flag == 0 && equal[1] >= 3 && equal[9] >= 3) return true;
	else return false;
}

bool shisantao()
{
	map<string,int> maps;

	maps.insert(pair<string,int>("dong",0));
	maps.insert(pair<string,int>("nan",0));
	maps.insert(pair<string,int>("xi",0));
	maps.insert(pair<string,int>("bei",0));
	maps.insert(pair<string,int>("zhong",0));
	maps.insert(pair<string,int>("bai",0));
	maps.insert(pair<string,int>("fa",0));


	for( int i = 0 ; i < 14 ; i ++ )
	{
		if(maps.find(a[i]) != maps.end()){
			maps[a[i]]++;
		}
	}
	
	int s[20] = {0},p[20] =  {0},w[20] = {0};

	for( int i = 0 ; i < 14 ; i ++ ){
	
		if(a[i][1] == 's') s[a[i][0] - '0']++;
		if(a[i][1] == 'p') p[a[i][0] - '0']++;
		if(a[i][1] == 'w') w[a[i][0] - '0']++;
	}


	int flag = 0;

	for(auto i : maps){
		if(i.second == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0 && s[1] >= 1 && s[9] >= 1 && p[1] >= 1 && p[9] >= 1 && w[1] >= 1 && w[9] >= 1)
		return true;
	else return false;
}

int main()
{
	for(int i = 0 ; i < 14 ; i ++ ) cin >> a[i];

	if(equal()){
		if(jiulianbaodeng()){
			cout << "jiulianbaodeng!" << endl;
		}else{
			cout << "i dont know!"  << endl;
		}
	}else{
		if(shisantao()){
			cout << "shisanyao!" << endl;
		}else{
			cout << "i dont know!"  << endl;
		}
	}

	return 0;
}
