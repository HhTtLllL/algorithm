class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
	    const int MAX = 10e9;
	    double temp1 = 0;
	    double temp2 = 0;
	    int flag = 0;
	    if(coordinates[1][0] - coordinates[0][0] == 0) temp1 = MAX;
	    else temp1 = (coordinates[1][1] - coordinates[0][1])/(coordinates[1][0] - coordinates[0][0]);

	    for(int i = 2;i < coordinates.size();i++)
	    {
		if(coordinates[i][0] - coordinates[i - 1][0]) temp2 = MAX;
		else temp2 = (coordinates[i][1] - coordinates[i-1][1])/(coordinates[i][0] - coordinates[i-1][0]);
		if(temp1 == temp2) 
		{
			flag = 0;
		}
		else 
		{
			flag = 1;
			break;
		}
		temp1 = temp2;
	    }
	    if(flag == 0) return true;
	    else return false;
        
        
    }
};
