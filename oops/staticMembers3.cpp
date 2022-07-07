#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout << "Name " << name << endl;
        cout << "Roll " << roll << endl;
    }
};

int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("John");
    Student s5("John");
    Student s6("John");

    s1.display();
    s6.display();
    cout << "Number of Addmissions " << Student::addNo << endl;

    return 0;
}