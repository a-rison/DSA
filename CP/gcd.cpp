#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if(a%b == 0)
        return b;
    // next divisor a%b
    //next dividend is old divisor
    return gcd(b, a % b);
}

int main() {
    cout << gcd(95, 18) << endl;
    return 0;
}