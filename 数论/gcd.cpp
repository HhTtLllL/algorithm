///////////////////////////////////////////////////////////////
// File Name: gcd.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-11 22:35:45
// Description:
///////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

/*前提是 a > b
 *
 *gcd 最大公约数  

 algorithm -->  __gcd(a, b)

 * */
int gcd(int a, int b) {

    if(b == 0) {

        return a;
    }

    return gcd(b, a%b);
}



int main() {

    int n, m;
    cin >> n >> m;


    int GCD = gcd(n ,m);

    cout << n / GCD * m << endl;        //最小公倍数
}
