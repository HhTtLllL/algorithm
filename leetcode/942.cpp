class Solution {
public:
    vector<int> diStringMatch(string S) 
    {
        vector<int> v;
        int min1 = 0,max1 = S.size();
        int len = max1;
        for(int i = 0;i < S.size();i++)
        {
            if(S[i] == 'I') v.push_back(min1++);
            else  v.push_back(max1--);
        }
        if(S[len - 1] == 'I') v.push_back(min1);
        else v.push_back( max1);
        
        return v;
    }
};
