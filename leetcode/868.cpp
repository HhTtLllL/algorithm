class Solution {                                                                                                                                         
public:
    int binaryGap(int N)  
    {   
        //if(N == 1) return 1;
            int MAX = 0;
            int sum = 0;
            while(N != 1)
            {
                cout << N << endl;
                    if(N%2)
                    {
                            sum++;
                            N >>= 1;
                            while(!(N%2))
                            {
                                    N  = N >> 1;
                                    sum++;
                            }
                    }
                    else
                    {
                        N >>= 1;
                    }
                    MAX = max(sum,MAX);
                    sum = 0;
            }

            return MAX;    
    }   
};

