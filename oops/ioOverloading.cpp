#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << "+i" << img << endl;
    }

    // Declaring friend function
    friend ostream &operator<<(ostream &o, Complex c);
};

ostream &operator<<(ostream &o, Complex c)
{
    o << c.real << "+i" << c.img << endl;
    return o;
}

int main()
{
    Complex c1(5, 13);
    Complex c2(7, 9);

    cout << c1;
    cout << c2;
    operator<<(cout, c2);

    return 0;
}