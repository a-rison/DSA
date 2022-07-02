#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    virtual void start() { cout << "Car started" << endl; }
};

class Innova : public Car
{
public:
    void start() { cout << "Innova started" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift started" << endl; }
};

int main()
{
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();
    return 0;
}