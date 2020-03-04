// main file
#include "Header1.h"


int main()
{
	std::vector <struct Point> Function_Table;
	std::vector<struct Point>& Table = Function_Table;

	int i;
	std::cout << "Enter table size: "; std::cin >> i;

	for (int j = 0; j < i; j++)
	{
		Point Element;
		Function_Table.insert(Function_Table.end(), Element);
		std::cout << "Set Y: "; std::cin >> Element.Y;
		std::cout << "     " << "Set X: "; std::cin >> Element.X; std::cout << std::endl;
	}

	first_diff(Table);
	second_diff(Table);
	third_diff(Table);

	return 0;
}
