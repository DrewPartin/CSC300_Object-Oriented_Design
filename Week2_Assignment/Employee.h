#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Project.h"
using namespace std;

class Employee : public Person {

private:
	int id;
	char pCode;

public:

	Employee(string name, char pCode, int id) : Person(name)
	{
		this->id = id;
		this->pCode = pCode;
	}

	void display()
	{
		cout << "Employee Name: " << getName() << endl << "Employee Id: " << id << endl << "Project Code: " << pCode << endl;
	}

	friend ostream& operator<<(ostream& out, const Employee& me)
	{
		out << "Employee: " << me.id << endl;
		return out;
	}
};
#endif
