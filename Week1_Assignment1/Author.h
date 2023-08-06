#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
using namespace std;

class Author
{
	private:
		string name;
		string email;
		char gender;

	public:
		Author()
		{
			name = "";
			email = "";
			gender = 'm';
		}
		Author(string _name, string _email, char _gender)
		{
			this->name = _name;
			this->email = _email;
			if (_gender == 'm' || _gender == 'f')
			{
				this->gender = _gender;
			}
			else
			{
				cout << "Gender must be 'm' or 'f'...";
			}
		}
		string getName()
		{
			return name;
		}
		string getEmail()
		{
			return email;
		}
		void setEmail(string _email)
		{
			this->email = _email;
		}
		char getGender()
		{
			if (gender == 'm' || gender == 'f')
			{
				return gender;
			}
			else
			{
				cout << "Gender is listed as " << gender << ", which is not valid...";
				return 0;
			}
		}
		void print()
		{
			cout << getName() << " (" << getGender() << ") " << "at " << getEmail() << endl << endl;
		}
};

#endif