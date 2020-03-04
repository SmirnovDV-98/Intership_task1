#include "Header1.h"
#include <vector> 

using namespace std;

void lineral_interpolation(vector <struct Point> &Table)
{
	double func_result;
	int first_point, second_point;
	double coord;
	cout << "Enter first point:"; cin >> first_point; cout << endl << "Enter second point:"; cin >> second_point; cout << endl << "Enter coordinate:"; cin >> coord; cout << endl;

	while ((first_point == 0) || (first_point > Table.size()))
	{
		cout<<"Out of table range value, enter first point again:";cin>>first_point;
	}
	while ((first_point == 0) || (first_point > Table.size()))
	{
		cout << "Out of table range value, enter second point again:"; cin >> second_point;
	}

	func_result = Table[first_point].Y + ((coord - Table[first_point].X) * (Table[second_point].Y - Table[first_point].Y)) / (Table[second_point].X - Table[first_point].X);
	cout << "Result of lineral interpolanion in point " << coord << " is " << func_result << endl;
}
void first_diff(vector <struct Point> &Table)
{
	//Take H in formula as X coordinate
	double diffur;
	int point_number;

	cout << "Enter differential calculation point:"; cin >> point_number;
	while ((point_number == 0) || (point_number > Table.size() + 1))
	{
		cout << "Out of table range value, enter point number again:"; cin >> point_number;
	}

	point_number = point_number - 1;
	diffur = (Table[point_number].Y - Table[point_number-1].Y) / Table[point_number].X;
	cout << "Result of differenciation of first type in point " << Table[point_number].X << " is " << diffur << endl;
}
void second_diff(vector <struct Point> &Table)
{
	int point_number;

	cout << "Enter differential calculation point:"; cin >> point_number;

	while ((point_number < 2) || (point_number > Table.size() + 1))
	{
		cout << "Out of table range value, enter point number again:"; cin >> point_number;
	}

	double diffur;

	point_number = point_number - 1;
	diffur = (Table[point_number].Y - Table[point_number-1].Y) / Table[point_number-1].X;
	cout << "Result of differenciation of second type in point " << Table[point_number].X << " is " << diffur << endl;
}
void third_diff(vector<struct Point> &Table)
{
	double diffur;
	int point_number;
	cout << "Enter differential calculation point:"; cin >> point_number;

	while ((point_number < 2) || (point_number > Table.size() - 1))
	{
		cout << "Out of table range value, enter point number again:"; cin >> point_number;
	}

	diffur = (Table[point_number + 1].Y - Table[point_number - 1].Y) / (2 * Table[point_number].X);
	cout << "Result of differenciation of second type in point " << Table[point_number].X << " is " << diffur << endl;
}
void calculation_choose(std::vector <struct Point>& Table)
{
	vector <struct Point>& newTableRef = Table;
	cout << "For lineral interpolation press one(1)." << endl << "For first differenciation press two(2)." << endl << "For second differenciation press three(3)" << endl << "For third differenciation press four(4)." << endl << "Enter type of calculation, please." << endl;
	int i;
	cin >> i;
	switch (i)
	{
		case 1:
			lineral_interpolation(Table);
		case 2:
			first_diff(Table);
		case 3:
			second_diff(Table);
		case 4:
			third_diff(Table);
		default:
			cout << "Unknown command, please, try again" << endl << endl;
			calculation_choose(newTableRef);
	}
}