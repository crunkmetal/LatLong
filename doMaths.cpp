/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#include <iostream>
#include <string>
#include <Windows.h> // shellExecuteA
#include "doMaths.h"
#include <string>

#include "directions.h"
#include "displayAndTiming.h"
#include "globalVars.h"

// function to display travel directions North
void parseDestData()
{
	// invoke function to convert double values to string values
	doubleToString(ptr_latitude, ptr_longitude);
	getURL();
	std::cout << "\t\t\b\b\b*** Ending Location ***\n";
	std::cout << "\t\t\b\b" << coord;
	std::cout << "\n\n\n";
	std::cout << " QUIT: ESC\n MOVE: use arrow keys\n";
	std::cout << "[] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []";
	pause_1s();
}

// function to open browser to specific location
void openApp()
{
	// open google maps browser app to a specific location
	ShellExecuteA(NULL, "open", search_URL.c_str(),
		NULL, NULL, SW_SHOWNORMAL);

	pause_1s();pause_1s();pause_1s();pause_1s();	pause_1s();pause_1s();pause_1s();pause_1s();

	closeApp();
}

// function to close the browser
void closeApp()
{
	system("taskkill /F /T /IM brave.exe");
	system("CLS");
	refreshLocationDisplay();
	

}


// function to convert COORDINATES from double type to string type
std::string doubleToString(double* startLat, double* startLong)
{
	// to_string() method used to convert from double to string
	std::string latCoord = std::to_string(*startLat);
	std::string longCoord = std::to_string(*startLong);
	// concatenate string values
	coord = latCoord + ", " + longCoord;
	// return this new string value
	return coord;
}

// function to concatenate a useable string
std::string getURL()
{
	search_URL = base_URL + base + "'/'" + coord + "'";;
	return search_URL;
}