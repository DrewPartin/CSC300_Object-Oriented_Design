#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include <string>
using namespace std;

class Project {

private:
	char code;

public:
	Project(char c) 
	{
		code = c;
	}

	void display() 
	{
		cout << "Project Code: " << code << endl;
	}

	friend ostream& operator<<(ostream& out, Project& me) 
	{
		out << "Project Code: " << me.code << endl;
		return out;
	}
};
#endif
