#include <bits/stdc++.h>
using namespace std;

class BasicCar
{
public:
    virtual void start() { cout << "Basic car started" << endl; }
};

class AdvanceCar : public BasicCar
{
public:
    void start() { cout << "Advance car started" << endl; }
};

int main()
{
    BasicCar *p = new AdvanceCar();
    p->start();

    return 0;
}