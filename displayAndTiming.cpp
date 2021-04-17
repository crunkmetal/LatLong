/*
	BJeremy
	C++ Pointers, Using multiple files
 */

#include <iostream>
#include <chrono>
#include <thread>
#include "displayAndTiming.h"

// function to display UI top screenEdge
void screenTop()
{
	std::cout << "\n[] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []";
	std::cout << "\n\n\n\n";
}
void screenBottom()
{
	std::cout << "\n\n\n\n";
	std::cout << "[] [] [] [] [] [] [] [] [] [] [] [] [] [] [] [] []";
}
void pause_100m()
{
	std::chrono::milliseconds dura(100);
	std::this_thread::sleep_for(std::chrono::milliseconds(dura));
}
void pause_1s()
{
	std::chrono::seconds duration(1);
	std::this_thread::sleep_for(duration);
}