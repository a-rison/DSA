#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int a)
    {
        if (a < 0)
            length = 1;
        length = a;
    }
    void setBreadth(int b)
    {
        if (b < 0)
            breadth = 1;
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    cout << r2.area() << endl;

    return 0;
}