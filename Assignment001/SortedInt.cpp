// FILE: SortedInt.cpp
//       Implementation file for the SortedInt class
//       (See SortedInt.h for documentation.)
// INVARIANT for the SortedInt class:
// (1) Items of the SortedInt are stored in a 1D compile-time
//     (fixed-sized) array of integers whose size is MAX_SIZE.
//     the member variable data references the array.
// (2) # of items the SortedInt currently contains is stored
//     in the member variable used.
// (3) Items of SortedInt are stored sorted in non-decreasing
//     order from data[0] through data[used - 1].
// (4) We DON'T CARE what is stored in any of the array elements
//     from data[used] and beyond (i.e. values in these elements
//     are NOT (re)set in any way).

#include <iostream>
#include "SortedInt.h"
// include any other relevant header files here
using namespace std;

SortedInt::SortedInt()
{
   cout << "SortedInt() is not implemented yet..." << endl;
}

bool SortedInt::isEmpty() const
{
   cout << "isEmpty() is not implemented yet..." << endl;
   return false; // dummy value returned
}

int SortedInt::size() const
{
   cout << "size() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

int SortedInt::valAt(int position) const
{
   cout << "valAt() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

int SortedInt::findMin() const
{
   cout << "findMin() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

int SortedInt::findMax() const
{
   cout << "findMax() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

double SortedInt::findMed() const
{
   cout << "findMed() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

double SortedInt::findAvg() const
{
   cout << "findAvg() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

int SortedInt::findFreq(int target) const
{
   cout << "findFreq() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

bool SortedInt::equal(const SortedInt& other) const
{
   cout << "equal() is not implemented yet..." << endl;
   return false; // dummy value returned
}

void SortedInt::reset()
{
   cout << "reset() is not implemented yet..." << endl;
}

void SortedInt::insert(int newInt)
{
   cout << "insert() is not implemented yet..." << endl;
}

int SortedInt::delMin()
{
   cout << "delMin() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

int SortedInt::delMax()
{
   cout << "delMax() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

bool SortedInt::delOne(int target)
{
   cout << "delOne() is not implemented yet..." << endl;
   return false; // dummy value returned
}

int SortedInt::delAll(int target)
{
   cout << "delAll() is not implemented yet..." << endl;
   return 0; // dummy value returned
}

void SortedInt::add(SortedInt addend)
{
   cout << "add() is not implemented yet..." << endl;
}

SortedInt combine(const SortedInt& s1, const SortedInt& s2)
{
   cout << "combine() is not implemented yet..." << endl;
   return SortedInt(); // dummy object returned
}
