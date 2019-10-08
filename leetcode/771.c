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


