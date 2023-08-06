#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book : Author
{
	private:
		string name;
		Author author;
		double price;
	public:
		Book(string _name, Author _author, double _price)
		{
			this->name = _name;
			this->author = _author;
			this->price = _price;
		}
		string getName()
		{
			return name;
		}
		Author getAuthor()
		{
			return author; 
		}
		double getPrice()
		{
			return price;
		}
		void setPrice(double _price)
		{
			this->price = _price;
		}
		void print()
		{
			Author a = getAuthor();
			cout << getName() << " by ";
			a.print();
		}
};

#endif
