/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#include <iostream>
#include "welcome.h"
#include "displayAndTiming.h"
#include "globalVars.h"
 

void intro()
{
	screenTop();
	std::cout << "\t\b\bEver wonder how the lines of longitude\n";
	std::cout << "\t\b\band latitude work ? The Earth is divided\n";
	std::cout << "\t\b\binto degrees of longitude and latitude\n";
	std::cout << "\t\b\bwhich helps us measure location and time\n";
	std::cout << "\t\b\busing a single standard.  When used together,\n";
	std::cout << "\t\b\blongitude and latitude define a specific\n";
	std::cout << "\t\b\blocation through geographical coordinates.";
	screenBottom();
	std::cout << "\n\n";
	system("pause");
	system("CLS");
	screenTop();
	std::cout << "\t\b\bWhat is Latitude?\n";
	std::cout << "\t\b\bThe lines of latitude run east and west,\n";
	std::cout << "\t\b\bparallel to the Equator.  They are used to\n";
	std::cout << "\t\b\bdefine the North - South position of a\n";
	std::cout << "\t\b\blocation on the planet.  There are 180\n";
	std::cout << "\t\b\blines of latitude.";
	screenBottom();
	std::cout << "\n\n";
	system("pause");
	system("CLS");
	screenTop();
	std::cout << "\t\b\bWhat is Longitude ?\n";
	std::cout << "\t\b\bThe lines of longitude run north and south.\n";
	std::cout << "\t\b\bThey are used to define the East - West\n";
	std::cout << "\t\b\bposition of a location on the planet.\n";
	std::cout << "\t\b\bThey run perpendicular to the Equator\n";
	std::cout << "\t\b\band latitude lines.  There are 180 lines\n";
	std::cout << "\t\b\bof longitude.";
	screenBottom();
	std::cout << "\n\n";
	system("pause");
	system("CLS");
	screenTop();
	std::cout << "\t\b\bDepending on your location on Earth, the\n";
	std::cout << "\t\b\bsize of the grid sector varies.  Sectors\n";
	std::cout << "\t\b\balong the equator encompass the most area.\n";
	std::cout << "\t\b\bAs you move closer to the poles, these\n";
	std::cout << "\t\b\bsectors contain less surface area.";
	screenBottom();
	std::cout << "\n\n";
	system("pause");
	system("CLS");
	screenTop();
	std::cout << "\t\b\bPurpose:\n";
	std::cout << "\t\b\bThis program helps the user get a sense of\n";
	std::cout << "\t\b\bthe scale of the planet we live on.  For\n";
	std::cout << "\t\b\beach direction the user chooses, a map is\n";
	std::cout << "\t\b\bdisplayed showing travel directions to\n";
	std::cout << "\t\b\ba location specifically one degree of\n";
	std::cout << "\t\b\blatitude or longitude(depending on choice)\n";
	std::cout << "\t\b\bfrom the user's current location.";
	screenBottom();
	std::cout << "\n\n";
	system("pause");
	system("CLS");

}
// user introduction
void initialize()
{
	screenTop();
	std::cout << "\tInitializing navigation module";
	screenBottom();
	pause_1s();
	system("CLS");
	screenTop();
	std::cout << "\t  Navigation module activated";
	screenBottom();
	pause_1s();
	system("CLS");

	screenTop();
	std::cout << "\t\t\b\b\b*** Current Location ***\n";
	std::cout << "\t\t\b\b" << base << "\n\n";
	std::cout << "\t  Use the 'arrow' keys to navigate.\n";
	std::cout << "\t\tPress 'ESC' to quit";
	screenBottom();
}