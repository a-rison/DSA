#include<bits/stdc++.h>
using namespace std;

class Hero {

	// properties
private:
	int health;

public:

	char level;
	char *name;
	//Static Datamember doesn't belongs to object
	static int timeToComplete;

	Hero() {
		cout << "constructor called" << endl;
		name = new char[100];
	}

	//Parameterised Constructor
	Hero(int health) {
		cout << "this -> " << this << endl;
		this -> health = health;
	}

	Hero(int health, char level) {
		this -> level = level;
		this -> health = health;
	}

	//Copy Constructor
	Hero(Hero& temp) {

		//Deep Copy
		char *ch = new char[strlen(temp.name) + 1];
		strcpy(ch, temp.name);
		this -> name = ch;

		cout << "Copy constructor called" << endl;
		this->health = temp.health;
		this->level = temp.level;
	}

	void print() {
		cout << "[ name: " << this-> name << " ,";
		cout << " health: " << this -> health << " ,";
		cout << " level: " << this -> level << " ]";
		cout << endl;
	}

	// getter
	int getHealth() {
		return health;
	}

	char getLevel() {
		return level;
	}

	// setter
	void setHealth(int h) {
		health = h;
	}

	void setLevel(char ch) {
		level = ch;
	}

	void setName(char name[]) {
		strcpy(this->name, name);
	}

	static int random() {
		return timeToComplete;
	}

	//Destructor
	~Hero() {
		cout << "Destructor bhai called" << endl;
	}
};

int Hero::timeToComplete = 5;

int main() {

	//cout << Hero::timeToComplete << endl;

	cout << Hero::random() << endl;











	// //Static
	// Hero a;

	// //Dynamic
	// Hero *b = new Hero();
	// //manually destructor called
	// delete b;


// 	Hero hero1;
// 	hero1.setHealth(12);
// 	hero1.setLevel('B');
// 	char name[6] = "Aryan";
// 	hero1.setName(name);

// 	//hero1.print();

// 	//use default copy constructor

// 	Hero hero2(hero1);
// 	//hero2.print();
// //   Hero hero2 = hero1;

// 	hero1.name[0] = 'G';
// 	hero1.print();

// 	hero2.print();

// 	hero1 = hero2;

// 	hero1.print();

// 	hero2.print();




	// Hero suresh(70, 'C');
	// suresh.print();

	// //Copy Constructor
	// Hero R(suresh);
	// R.print();

	// //object created statically
	// Hero ramesh(10);
	// cout << "Address of ramesh " << &ramesh << endl;

	// //dynamically
	// Hero *h = new Hero(11);

	// // static allocation
	// Hero a;
	// cout << "level is " << a.level << endl;
	// cout << "health is " << a.getHealth() << endl;

	// //dynamically
	// Hero *b = new Hero;
	// cout << "level is " << (*b).level << endl;
	// cout << "health is " << (*b).getHealth() << endl;

	// cout << "level is " << b->level << endl;
	// cout << "health is " << b->getHealth() << endl;

	// Hero h1;
	// cout << sizeof(h1) << endl;

	// Hero ramesh;

	// ramesh.setHealth(70);
	// ramesh.level = 'A';

	// cout << "health is: " << ramesh.getHealth() << endl;
	// cout << "level is: " << ramesh.getLevel() << endl;


}