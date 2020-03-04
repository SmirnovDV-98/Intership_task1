#include <iostream>
#include <vector>

struct Point
{
	double X;
	double Y;

};


void lineral_interpolation(std::vector<struct Point>& Table);
void first_diff(std::vector <struct Point>& Table);
void second_diff(std::vector <struct Point>& Table);
void third_diff(std::vector <struct Point>& Table);
void calculation_choose(std::vector <struct Point>& Table);
