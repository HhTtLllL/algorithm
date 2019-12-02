class Solution {
public:
    char findTheDifference(string s, string t)
    {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());

            int flag = 0;

            char temp;

            for(int i = 0;i < s.size();i++)
            {
                    if(s[i] != t[i])
                    {
                            temp = t[i];
                            flag = 1;
                            break;
                    }

            }

            if(flag == 0) return t[t.size() - 1];
            else return temp;                                                                                                                            

    }
};
