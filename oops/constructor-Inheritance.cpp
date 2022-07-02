#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base() { cout << "Default base" << endl; }
    Base(int x) { cout << "Param base " << x << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Default Derived" << endl; }
    Derived(int y) { cout << "Param Derived " << y << endl; }
    Derived(int x, int y) : Base(x) { cout << "Param derived " << y << endl; }
};

int main()
{
    Derived d;
    cout << endl;
    Derived d1(10);
    cout << endl;
    Derived d2(5, 10);

    return 0;
}