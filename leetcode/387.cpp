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

//第二次做

class Solution {

int a[30];

public:
    int firstUniqChar(string s) {

        for(int i = 0; i < s.length(); i ++) {

            a[s[i] - 'a']++;
        }

        for(int i = 0; i < s.length(); i ++) {

            if(a[s[i] - 'a'] == 1) return i;
        }



        return -1;
    }
};
