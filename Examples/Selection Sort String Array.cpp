// Credit to Stack Overflow user EM2_Rob
// Link : https://stackoverflow.com/questions/23333220/string-selection-sort-in-c
#include <iostream>
#include <string>
using namespace std;

//Constant globals
const int NUM_NAMES = 20;

//Function protoypes
void selectionSort(string [], int);
void showArray(const string [] , int);

int main()
{
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allet, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Aliison, Jeff", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth"};

    char again; //Hold y to repeat

    do
    {
        //Show array
        cout << "\nThe unsorted values are\n";
        showArray(names, NUM_NAMES);

        //Sort array
        selectionSort(names, NUM_NAMES);

        //Display sorted array
        cout << "The sorted values are\n";
        showArray(names, NUM_NAMES);

        //Run program again?
        cout << "Would you like to run the program again? (Y/N): ";
        cin >> again;
    }while(again == 'y' || again == 'Y');

    return 0;
}

void selectionSort(string array[], int NUM_NAMES)
{
    int startScan, minIndex;
    string minValue;

    for(startScan = 0; startScan < (NUM_NAMES -1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan +1; index < NUM_NAMES; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

void showArray(const string Names[], int num)
{
    for(int x = 0; x < num; x++)
    {
        cout << Names[x] << endl;
    }

    cout << endl;
}
