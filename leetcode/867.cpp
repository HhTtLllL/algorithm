class Solution {                                                                
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) 
    {
            vector<vector<int>> b;
            if(A.empty()) return b;
            for(int i = 0;i < A[0].size();i++)
            {
                    vector<int> temp;
                    for(int j = 0;j < A.size();j++)
                    {
                            temp.push_back(A[j][i]);
                    }
                    b.push_back(temp);
            }

            return b;
    }
};
