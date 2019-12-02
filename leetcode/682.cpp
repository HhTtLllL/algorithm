class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
	    vector<int> a;
	    auto it = ops.begin();
	    for(it;it != ops.end();it++)
	    {
		    if(*it == 'C') a.pop_back();
		    else if(*it == 'D')
		    {
			    a.push_back(a.back() * 2);
		    }
		    else if(*it == '+')
		    {
			    int temp1 = a.back();
			    a.pop_back();
			    int temp2 = a.back();
			    a.pop_back();
			    a.push_back(temp1);
			    a.push_back(temp2);
			    a.push_back(temp1 + temp2);
		    }
		    else a.push_back(*it);
	    }
	    int ans1 = 0;
	    for(auto i : a) ans1 += i;
	    return ans1;

        
    }
};
