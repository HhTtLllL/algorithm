/*执行耗时： 0ms
 * 内存 ： 8.1mb
 * */
class Solution {
public:
    int fib(int N) 
    {
	    int f1 = 0;
	    int f2 = 1;
	    int f3 = f1 + f2;
	    if(N == 0) return 0;
	    else if(N == 1) return 1;
	    else
	    {
		    for(int i = 1;i < N;i++)
		    {
			    f3 = f1 + f2;
			    f1 = f2;
			    f2 = f3;
		    }
	    }
	    return f3;
    }
};
