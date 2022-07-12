#include <bits/stdc++.h>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p *= x;
        f *= n;
        return r + p / f;
    }
}

int main()
{
    cout << e(1, 10) << endl;
    return 0;
}