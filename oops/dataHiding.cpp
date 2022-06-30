#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
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
    Rectangle *r;
    r = new Rectangle;
    r->setLength(5);
    cout << r->getLength() << endl;
    return 0;
}