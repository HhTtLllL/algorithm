class Solution {
public:
    int firstUniqChar(string s) 
    {
	    int a[30][2];
	    for(int i = 0;i < s.size();i++)
	    {
		    a[s[i] - 'a'][0] = i;
		    a[s[i] - 'a'][1]++;
	    }
	    int flag = -1;
	    for(int i = 0;i < s.size();i++)
	    {
		    if(a[s[i] - 'a'][1] == 1)
		    {
			    flag = a[s[i] - 'a'][0];
			    break;
		    }
	    }

	    return flag;
        
    }
};
