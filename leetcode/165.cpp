class Solution {
public:
            vector<int> get_num(string num)
            {   
                 vector<int> ans;
                    for(int i = 0;i < num.size();i++)
                    {   
                            int j = i;
                           int s = 0;            
                        while(j < num.size() && num[j] != '.')
                        {
                            s = s * 10 + (num[j] - '0');
                            j++;
                        }
                        i = j;
                        ans.push_back(s);
                    }   
                    while(ans.size() && ans.back() == 0) ans.pop_back();
                    return ans;
            }   
       	   int compareVersion(string version1, string version2) 
    	   {   
	            auto temp1 = get_num(version1);
      	  	    auto temp2 = get_num(version2);

            	    if(temp1 < temp2) return -1;
            	    else if(temp1 == temp2) return 0;
            	    else return 1;
    	   }
};

