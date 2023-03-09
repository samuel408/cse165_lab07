#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
	std::string name;
	int age;

public:
	Animal() {
		name = "Generic Name";
		age = 0;
	}

	Animal( std::string n, int a ) {
		name = n;
		age = a;
	}
	
	virtual void talk(){
		cout << "Dog::talk" << endl;
		cout << "Cat::talk" << endl;

	}
};

#endif