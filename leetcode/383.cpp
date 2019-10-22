class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
	    int a[30] = {0};
	    for(int i = 0;i < ransomNote.size();i++)
	    {
		    a[ransomNote[i] - 'a']++;
	    }

	    for(int i = 0;i < magazine.size();i++)
	    {
		    a[magazine[i] - 'a']++;
	    }
		
	    bool flag = true;
	    for(int i = 0;i < 30;i++)
	    {
		    if(a[i] > 0)
		    {
			    flag = false;
		    }
	    }
	
	    return flag;
        
        
    }
};
