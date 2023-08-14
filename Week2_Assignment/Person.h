#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {

private:
	string name;

public:
	Person(string n)
	{
		name = n;
	}

	string getName()
	{
		return name;
	}

	void display()
	{
		cout << "Name: " << name << endl;
	}

	friend ostream& operator<<(ostream& out, const Person& me)
	{
		out << "Name: " << me.name << endl;
		return out;
	}
};
#endif
