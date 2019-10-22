class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) 
    {
        int max1 = *max_element(A.begin(),A.end());
        int min1 = *min_element(A.begin(),A.end());
        int temp = max1 - min1;
        if(temp >= 2*K) return (temp - 2*K);
        else return 0;
    }
};
