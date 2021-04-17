/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#ifndef _GLOBALVARS_H
#define _GLOBALVARS_H

#include <string>
using namespace std;

// global declarations
 extern string base_URL;
 extern string search_URL;
 extern string base;
 extern string* p_base;
 extern string coord;
 extern string* p_coord;
 extern string currentLocation;
// starting coordinates (UAT)x`
 extern double startLat;		// latitude = N/S
 extern double* ptr_latitude;
 extern double startLong;		// longitude = E/W
 extern double* ptr_longitude;

#endif	//end of file

