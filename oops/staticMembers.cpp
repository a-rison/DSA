#include <bits/stdc++.h>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    static int count;
    Test()
    {
        a = 10;
        b = 10;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Test::count = 0;

int main()
{
    Test t1;
    Test t2;

    cout << Test::getCount() << endl;
    cout << t1.getCount() << endl;

    cout << t1.count << endl;

    t1.count = 25;
    cout << t2.count << endl;
    cout << Test::count << endl;

    return 0;
}