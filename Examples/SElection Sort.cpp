// sort array with selection sort, pg. 471-472
#include <iostream>
using namespace std;

void selectionSort(int[], int);
void showArray(const int[], int);

int main()
{
	const int SIZE = 6;
	int values[SIZE] = { 5, 7, 2, 8, 9, 1};

	// show unsorted array
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);

	// selection sort the array
	selectionSort(values, SIZE);

	// display the array
	cout << "The sorted values are:\n";
	showArray(values, SIZE);

	cin.ignore();
	cin.get();
}

void selectionSort(int list[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = list[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (list[index] < minValue)
			{
				minValue = list[index];
				minIndex = index;
			}
		} // end for

		list[minIndex] = list[startScan];
		list[startScan] = minValue;

	} // end for

}

void showArray(const int list[], int size)
{
	for (int count = 0; count < size; count++)
	{
		cout << list[count] << " ";
	}
	cout << endl;
}