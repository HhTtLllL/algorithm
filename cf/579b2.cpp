#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int m,n;
int q;
int a[500];
int main()
{
	int t;
	cin >> t;
	int flag;
	int temp;
	while(t--)
 	{
	 	 int n;
      	 	 memset(a,0,sizeof(a));
       		 flag=0;
      		 cin >> n;
       		 for(int i=1;i<=4*n;i++)	 cin >> a[i];
  		 sort(a+1,a+1+4*n);
		 temp = 0;
 	         for(int i=1;i<=4*n;i+=2)
 	         {
           	   if(a[i] != a[i+1])
	            {
			    printf( "NO\n");
			    temp = 1;
        		    break;
        	    }
        	}
  	       if(temp)    continue;

	       int tmp=4*n;
	       
	       int ans=a[1]*a[tmp];
	       for(int i=1;i<=2*n;i+=2)
	       {
       		     if(a[i]*a[tmp-i]!=ans)
       		     {
       		         flag = 1;
       		         break;
       		     }
       		}
      		if(flag) printf( "NO\n");
      		else     printf( "YES\n");
   	 }

	
	 return 0;
}

