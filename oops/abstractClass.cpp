#include <iostream>
using namespace std;

/*program for abstract class

*/
class car
{
public:
    virtual void start() = 0;
};
class innova : public car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }
};
int main()
{
    // car c; //object of abstract class is not allowed
    car *p = new innova();
    p->start();
    p = new swift();
    p->start();
}