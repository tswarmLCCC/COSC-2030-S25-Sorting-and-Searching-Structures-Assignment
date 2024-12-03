// demonstrate searchList function using linear search, pg. 452
#include <iostream>
using namespace std;

int searchList(const int[], int, int);

const int SIZE = 5;

int main()
{
	int tests[SIZE] = { 87, 75, 98, 99, 82 };
	int results;

	// search the array for 100
	results = searchList(tests, SIZE, 100);

	// if statement print result if no 100 found
	if (results == -1)
	{
		cout << "You did not achieve a 100 on any test.\n";
	}
	else
	{
		cout << "You earned 100 points on test " << (results + 1) << endl;
	}

	cin.ignore();
	cin.get();
}

int searchList(const int list[], int numElements, int value)
{
	int index = 0; // subscrit for searching the array
	int position = -1; // record the position of searched value
	bool found = false; // flag value; indicate when searched value is found

	while (index < numElements && !found) // index less than SIZE AND not found/found not true
	{
		if (list[index] == value)
		{
			found = true;  // set the flag
			position = index; // record value subscript
		}
		index++;
	}// end while

	return position;
}