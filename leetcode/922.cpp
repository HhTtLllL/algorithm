/*
 * 执行消耗: 120 ms
 * 内存: 11.8mb
 * */

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A)  
    {
            int ji = 1;
            int o = 0;
            for(o = 0;o < A.size();o += 2)
            {       
                    if(A[o] %2 == 1)
                    {       
                            while(ji < A.size())
                            {       
                                    if(A[ji]%2 == 0)
                                    {       
                                            swap(A[o],A[ji]);
                                            break;
                                    }
                                    else	ji += 2;
                            }
                    }
            }
            return A;                                                                                                                                         
    }   
};


/*
 * 执行耗时:168ms
 * 内存: 11.7mb
 *
 * */
/*
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
	    int n = A.size();
	    vector<int> a(n,0);

	    int ji = 1;
	    int o = 0;
		
	    for(auto i : A)
	    {
		    if((i%2) == 0)
		    {
			a[o] = i;
			o += 2;
		    }
		    else 
		    {
			    a[ji] = i;
			    ji += 2;
		    }
	    }

	    return a;
    }
};*/
