#include <iostream>
#include <format>
#include <cmath>
using namespace std;

int main() {

	const int inches{ 12 };
	double length_shelf{ 0 };
	double depth_shelf{ 0 };
	int side_box{ 0 };

	cout << "Hello! This program will the number of boxes that a shelf can hold on a single layer. Please, enter the length of the shelf in feet: ";
	cin >> length_shelf;
	cout << endl << "Please, enter the depth of the shelf in feet: ";
	cin >> depth_shelf;
	cout << endl;
	cout << "Please, enter the side of the box in inches: ";
	cin >> side_box;
	cout << endl;

	//area of the shelf and the box
	double area_shelf = length_shelf * depth_shelf;
	int area_box = pow(side_box, 2);

	//conerting from feet to inches
	auto convert_shelf_area_to_inches = static_cast<int>(area_shelf * inches);
	int boxes_amount = convert_shelf_area_to_inches / area_box;

	cout << format("The shelf can hold {} boxes", boxes_amount);



	return 0;
}