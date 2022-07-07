#include <bits/stdc++.h>
using namespace std;

class Outer
{
public:
    void fun()
    {
        i.display();
    }

    class Inner
    {
    public:
        void display()
        {
            cout << "Display of inner" << endl;
        }
    };
    Inner i;
};

int main()
{

    return 0;
}