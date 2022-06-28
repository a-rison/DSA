#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {

    Dog (int x=0):age(x){}


};

int main() {

    Dog d(2);
    d.speak();
    cout << d.age << endl;

}