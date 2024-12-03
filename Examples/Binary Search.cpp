// demonstrate binary search, pg. 456
#include <iostream>
using namespace std;

int binarySearch(const int[], int, int);

const int SIZE = 20;

int main() {
  // employee id number array
  int idNum[SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296,
                     310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
  int results; // hold the position of the employee
  int empId;   // hold the employee id number we are searching for

  // ask user for employee id number
  cout << "Enter the employee ID you wish to search for: ";
  cin >> empId;

  // search for id number
  results = binarySearch(idNum, SIZE, empId);

  // display results
  if (results == -1) {
    cout << "That number does not exist.\n";
  } else {
    cout << "That id number was found at position: " << results;
    cout << endl;
  }

  cin.ignore();
  cin.get();
}

int binarySearch(const int list[], int size, int value) {
  int first = 0,       // hold first array element
      last = size - 1, // holds last array element
      middle,          // search midpoint
      position = -1;   // position of searched element
  bool found = false;  // flag

  while (!found && first <= last) {
    middle = (first + last) / 2; // calculate midpoint
    if (list[middle] == value) {
      found = true;
      position = middle;
    } else if (list[middle] > value) {
      last = middle - 1;
    } else {
      first = middle + 1;
    }
  } // end while

  return position;
}