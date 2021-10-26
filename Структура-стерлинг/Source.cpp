#include <iostream>
using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	double pounds;
	sterling money;

	cout << "¬ведите фунты и пенсо через точку\n";
	cin >> pounds ;
	money.pence = pounds * 240;
	money.shillings = money.pence % 240 / 12;
	money.pounds = money.pence / 240;
	money.pence = money.pence % 240 % 12;

	cout << "Pounds.Shillings.Pence\n";
	cout << money.pounds << "." << money.shillings << "." << money.pence;





		//sterling newp;
		//int sumpens;
		//cout << "Enter decimal pounds" << endl;
		//cin >> newp.pounds >> newp.pens;
		//sumpens = ((newp.pounds * 100) + newp.pens) * 2.4;
		//newp.pounds = sumpens / 240;
		//newp.shilling = sumpens % 240 / 12;
		//newp.pens = sumpens % 240 % 12;
		//cout << "Old pounds: J" << newp.pounds << "." << newp.shilling << "." << newp.pens << endl;




	return 0;
}