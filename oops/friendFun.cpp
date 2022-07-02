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
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main()
{
    Complex c1(5, 13);
    Complex c2(7, 9);

    Complex c3, c4;

    c3 = c1 + c2;
    c4 = c1 + c3;
    c3.display();
    c4.display();

    return 0;
}