class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {
	    int num = 0;
	    int max1 = A.front();
	    for(int i = 0;i < A.size();i++)
	    {
		    if(A[i] > max1)
		    {
			    max1 = A[i];
			    num = i;
		    }
	    }
	    return num;
    }
};
