#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

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
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;

    // pointer to an object

    Rectangle *r2;
    r2 = &r1;
    (*r2).length = 10;
    r2->length = 15;
    cout << r2->length << endl;

    // declaring an object in heap

    Rectangle *r3;
    r3 = new Rectangle;
    r3->breadth = 15;

    return 0;
}