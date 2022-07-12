#include <bits/stdc++.h>
using namespace std;

int Pow(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return Pow(m * m, n / 2);
    else
        return m * Pow(m * m, (n - 1) / 2);
}

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    return pow(m, n - 1) * m;
}

int main()
{
    cout << pow(2, 9) << endl;
    cout << Pow(2, 9) << endl;
    return 0;
}