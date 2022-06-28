#include<bits/stdc++.h>
using namespace std;

class Human {

protected:
	int height;
public:
	int weight;
private:
	int age;

public:
	int getAge() {
		return this->age;
	}
	void setWeight(int w) {
		this->weight = w;
	}

};

//child class syntax
//class child_class_name: mode_of_inheritance parent_class_name {};
class Male: public Human {

public:
	string color;

	void sleep() {
		cout << "Male Sleeping" << endl;
	}

	int getHeight() {
		return this->height;
	}
};

int main() {

	Male m1;
	cout << m1.getHeight() << endl;

	/*
	Male object1;
	cout << object1.age << endl;
	cout << object1.weight << endl;
	cout << object1.height << endl;

	cout << object1.color << endl;

	object1.setWeight(84);
	cout << object1.weight << endl;
	object1.sleep();
	*/
}