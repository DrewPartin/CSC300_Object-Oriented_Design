#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Project.h"

int main()
{
	Person p1 = Person("Drew");
	p1.display();

	cout << endl;

	Project pr1 = Project('a');
	pr1.display();

	cout << endl;

	Employee e1 = Employee("Partin", 'b', 1);
	e1.display();

	cout << endl;
}


