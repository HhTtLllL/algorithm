     #include <stdio.h>  
    #include <stdlib.h>  
    #include <math.h>  
      
    int main(){  
        int a,b,k;
	double a_k;
        while(scanf("%d%d",&a,&b)!=EOF){  
             k = abs(a-b);  
             a = a < b? a : b;  
             a_k = floor(k*(1.0 + sqrt(5.0))/2);  
	     printf( "a_k = %lf\n",a_k);
             printf("%d\n",a!=a_k);  
             //输出为0，说明该点为必败点，1为必胜点  
        }  
        return 0;  
    }  
