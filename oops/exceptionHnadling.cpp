#include <bits/stdc++.h>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
        throw 1;
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero" << '\n';
    }
    cout << "Bye" << endl;
}