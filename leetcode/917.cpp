class Solution {
public:
    string reverseOnlyLetters(string S)
    {   
            char a[110];
            int j = 0;
            for(int i = S.size() - 1;i >= 0;i--)
            {   
                    if(S[i] >= 'A' && S[i] <= 'Z' || S[i] >= 'a' && S[i] <= 'z')
                    {   
                        a[j++] = S[i];    
                    }   
            }   

            j = 0;
            for(int i = 0;i < S.size();i++)
            {   
                    if(S[i] >= 'A' && S[i] <= 'Z' || S[i] >= 'a' && S[i] <= 'z')
                    {   
                            S[i] = a[j++];
                    }   
            }   
            return S;                                                                                                                                         
    }   
};
