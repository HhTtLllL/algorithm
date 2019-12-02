class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
	    vector<int> num(30,0);
	    for(int i = 0;i < chars.size();i++) num[chars[i]-'a']++;
	    int ans = 0;

	    for(int i = 0;i < words.size();i++)
	    {
		    vector<int> num1(num);
		    int flag = 0;
		    for(int j = 0;j < words[i].size();j++)
		    {
			    if(num1[words[i][j] - 'a'] == 0)
			    {
				    flag = 1;
				    break;
			    }
			    else num1[words[i][j] - 'a']--;
		    }
		    if(flag == 0)    ans += words[i].size();

	    }
	    return ans;
        
    }
};
