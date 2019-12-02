/*
 * 耗时 :0ms
 * 内存 :8.2mb
 *
 * */

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) 
    {
	    vector<int> pos{a,b,c};
	    sort(pos.begin(),pos.end());
	    //计算最小的移动次数
	    int MAX = 0;
	    int MIN = 0;
	    
	    if(pos[2] - pos[1] == 1 && pos[1] - pos[0] == 1)  MAX = 0;
	    else if((pos[2] - pos[1]) <= 2 || (pos[1] - pos[0]) <= 2)  MAX = 1;
	    else MAX = 2;

	    int sum = 0;
	    sum += (pos[2] - pos[1]);
	    sum += (pos[1] - pos[0]);
	    MIN = sum - 2;

	    vector<int> ans(MAX,MIN);
	 
	    return ans;
    }
};
