/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#include <iostream>
#include <conio.h>	// _getch
#include "directions.h"
#include "doMaths.h"
#include "displayAndTiming.h"
#include "globalVars.h"	
#include <string>
#include <thread>

using namespace std;

// function to display travel directions North
void goNorth(double* ptr_latitude)
{
	*ptr_latitude += 1;
	parseDestData();
	openApp();
}
// function to display travel directions South
void goSouth(double* ptr_latitude)
{
	*ptr_latitude -= 1;
	parseDestData();
	openApp();
}
// function to display travel directions West
void goWest(double* ptr_longitude)
{
	*ptr_longitude -= 1;
	parseDestData();
	openApp();
}
// function to display travel directions East
void goEast(double* ptr_longitude)
{
	*ptr_longitude += 1;
	parseDestData();
	openApp();
}

// function for user direction choice/switch statement
void chooseDirection()
{
	char ch = 0;
	// assigning user input to variable 'ch'
	ch = _getch();
	system("CLS");
	// while user does not press ESC key, user picks a direction
	while ((ch = _getch()) != 27)
	{
		switch (ch)
		{
		case 72:	// up arrow... NORTH
			std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
			system("CLS");
			screenTop();
			std::cout << "\t\t\b\b\b*** Starting Location ***\n";
			std::cout << "\t\t\b\b" << base << "\n\n";
			// invoke function to increment latitude, using pass by reference
			goNorth(ptr_latitude);
			// invoke function to set new starting point
			getCurrentLocation(p_coord, p_base);
			break;
		case 80:	// down arrow... SOUTH
			std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
			system("CLS");
			screenTop();
			std::cout << "\t\t\b\b\b*** Starting Location ***\n";
			std::cout << "\t\t\b\b" << base << "\n\n";
			// invoke function to increment latitude, using pass by reference
			goSouth(ptr_latitude);
			getCurrentLocation(p_coord, p_base);
			break;
		case 75:	// left arrow... WEST
			std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
			system("CLS");
			screenTop();
			std::cout << "\t\t\b\b\b*** Starting Location ***\n";
			std::cout << "\t\t\b\b" << base << "\n\n";
			// invoke function to change longitude, using pass by reference
			goWest(ptr_longitude);
			getCurrentLocation(p_coord, p_base);
			break;
		case 77:	// right arrow... EAST
			std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
			system("CLS");
			screenTop();
			std::cout << "\t\t\b\b\b*** Starting Location ***\n";
			std::cout << "\t\t\b\b" << base << "\n\n";
			// invoke function to change longitude, using pass by reference
			goEast(ptr_longitude);
			getCurrentLocation(p_coord, p_base);
			break;
		}
	}
}

void refreshLocationDisplay()
{
	std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
	system("CLS");
	screenTop();
	std::cout << "\t\t\b\b\b*** Starting Location ***\n";
	std::cout << "\t\t\b\b" << base << "\n\n";
	getCurrentLocation(p_coord, p_base);
	parseDestData();
}

// function to change starting location of next move (based on user input)
void getCurrentLocation(string* p_coord, string* p_base)
{
	// create a temp string variable with the value of the dereferenced value at address of p_base;
	// temp value stores new starting point
	string temp = *p_base;

	// derefed value at address of p_base is equal to the dereferenced value at address of p_coord
	// new destination
	*p_base = *p_coord;

	// derefed value at address of p_coord is now equal to the dereferenced value of p_base
	// new starting point
	*p_coord = temp;
}