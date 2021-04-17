/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#include "globalVars.h"
#include <string>

// global declarations
string base_URL = "https://www.google.es/maps/dir/'";
string search_URL = "";
string base = "33.377970, -111.975580";
string* p_base = &base;
string coord = "";
string* p_coord = &coord;
string currentLocation = "";
// starting coordinates (UAT)x`
double startLat = 33.377970;		// latitude = N/S
double* ptr_latitude = &startLat;
double startLong = -111.975580;		// longitude = E/W
double* ptr_longitude = &startLong;

