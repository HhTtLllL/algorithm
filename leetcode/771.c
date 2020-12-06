int numJewelsInStones(char * J, char * S)
{
    int sum = 0;
    int i = 0;
    int j = 0;
    while(J[i] != '\0')
    {
        j = 0;
        while(S[j] != '\0')
        {
            if(J[i] == S[j]) sum++;
            j++;
        }
        i++;
    }
    
    return sum;
}



class Solution {
public:
    int numJewelsInStones(string J, string S) {

        int sum = 0;
        int lenj = J.length();
        int lens = S.length();

        for(int i = 0; i < lenj; i ++) {

            for(int j = 0; j < lens; j ++) {

                if(J[i] == S[j]) sum++;
            }
        }

        return sum;
    }
};
