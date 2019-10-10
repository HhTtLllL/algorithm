class Solution {
public:
    int countSubstrings(string s) 
    {
        	int cnt = manacher(s);
        
        	return cnt;
    }
    
    int manacher(string s)
    {
    	int len = s.size();
    	int l = 0;
	char ma[2*1005];
    	int p[2 * 1005] = {0};
	ma[l++] = '$';
        ma[l++] = '#';
	for(int i = 0;i < len;i++)
	{
		ma[l++] = s[i];
	    	ma[l++] = '#';
	}
    	ma[l] = 0;
	
	int mx = 0,id = 0;
    	for(int i = 0;i < l;i++ )
	{
		p[i] = mx > i ? min(p[2*id - i],mx - i):1;
		if(i >= p[i]) while(ma[i + p[i]] == ma[i - p[i]]) p[i]++;
		if(i + p[i] > mx)
		{   
		    mx = i + p[i];
		    id = i;
		}   
	}

	int cnt = 0;
	for(int i = 0;i < 2*len + 2;i++) cnt += (p[i]/2);
	    return cnt;
    }
};
