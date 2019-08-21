#include <bits/stdc++.h>
using namespace std;
char s[1000005];
int main() {
	while (scanf( "%s",s) != EOF)
	{
	    int len = strlen(s);
	    int b, a, m, sum = 0;
	    scanf( "%d",&m);
	    while (m--)
	    {
	        scanf( "%d%d",&a,&b);
	        int x = b - a + 1;
	        sum += len - x;
	    }
	    if (sum % 2 == 1) cout << "Alice\n";
	    else cout << "Bob\n";
	}
    return 0;
}

