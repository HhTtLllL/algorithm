
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main( )
{
        int n[4];
        int a,b,c;
        for(int i = 0;i < 4;i++)
        {   
                scanf( "%d",&n[i]);
        }   
                                                                                
        sort(n,n+4);
        a = n[3] - n[0];
        b = n[3] - n[1];
        c = n[3] - n[2];
        printf( "%d %d %d",a,b,c);
     
}

