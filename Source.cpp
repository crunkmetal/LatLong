/*
	BJeremy
	C++ Pointers, Using multiple files
 */

// preprocessor directives
#include "welcome.h"
#include "directions.h"


// the one and only main
int main()
{
	intro();
	initialize();
	chooseDirection();
	return 0;
}	// end of main








// TYPES OF POINTERS
// standard pointer
	// - read from/write to orig. var
	// - can change vars pointed to
	// int* pFinalScore = &finalScore;

// constant pointer
	// - read from/write to orig. var
	// - can NOT change what pointer points to
	// - hence, address stored in pointer is const
	// int* const pFinalScore = &finalScore;

// pointer to a constant
	// - read only
	// - can change what pointer points to
	// const int* pFinalScore = &finalScore;

// constant pointer to a constant
	// - read only
	// - can NOT change what pointer points to
	// const int* const pFinalScore = &finalScore

// * an array name is a constant pointer to the address of the first element stored in an array
// * access array elements as such:
// studentAges[0] = 19; (array element 0 value)
// studentAges[3] = 45; (array element 4 value)
	// accessed via pointer notation
// *studentAges = 19;
// *(studentAges + 3) = 45;

// * return a pointer to another pointer
//		int* ptrToInt();
//		int* pMyPointer = ptrToInt(); (inexpensive assignment)
// * use new pointer to change value of orig. var (cont.d)
//		*pMyPointer += 10;
// * or, copied to another var
//		int newValue
//		int& rMyRef = refToInt(); (inexpensive assignment)
// * used to change val of orig var
//		rMyRef += 10; = *(ptrToInt()); (expensive assignment)

// REFERENCES
// * a ref can be returned to another ref
//		int& refToInt();
// * or, copied to a new var
//		int newValue = refToInt(); (expensive assignment)
