class Solution 
{
public:
    string defangIPaddr(string address)
    {
       string a;
       int i = 0;
       int j = 0;
       while(address[i] != '\0')
       {
	       if(address[i] != '.')
	       {
		       a[j] = address[i];
		       j++;
	       }
	       else
	       {
		       a[j] = '[';
		       j++;
		       a[j] = '.';
		       j++;
		       a[j] = ']';
		       j++;
	       }
	       i++;
       }
       address = a;
       return address;
    }
};
