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

	cout << "Ââåäèòå ôóíòû è ïåíñî ÷åðåç òî÷êó\n";
	cin >> pounds ;
	money.pence = pounds * 240;
	money.shillings = money.pence % 240 / 12;
	money.pounds = money.pence / 240;
	money.pence = money.pence % 240 % 12;

	cout << "Pounds.Shillings.Pence\n";
	cout << money.pounds << "." << money.shillings << "." << money.pence;

	return 0;
}
