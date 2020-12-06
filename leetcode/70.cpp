class Solution{
        public:
                int climbStairs(int n)
                {   
                        vector<int> v( n + 2, -1);
                        v[1] = 1;
                        v[2] = 2;

                        for( int i = 3 ; i <= n ; i ++ )
                        {   
                                v[i] = v[i - 1] + v[i - 2]; 
                        }   

                        return v[n];
                }   
};

// 相邻两步步伐不能相同  
