/*
 * 执行用时：56ms
 * 内存小号 10.7mb
 */


class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
	    sort(A.begin(),A.end());

	    for(int i = 0;i < A.size()-1;i++)
	    {
		    if(A[i] == A[i+1])
		    {
			    return A[i];
		    }
	    }
        
    }
};




/*
 *执行用时 1420ms
 *内存小韩 10.5mb
 */

class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
            int flag = 0;
            for(auto i : A)
            {
                    int time = 0;
                    for(auto j : A)
                    {
                            if(i == j) time++;
                            if(time > 1) 
                            {                                                   
                                    flag = i;
                                    break;
                            }
                    }
            }
            return flag;
    }   
};

