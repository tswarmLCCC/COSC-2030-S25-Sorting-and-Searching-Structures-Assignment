/*
Create a structure prototype for each piece of information required. The
required pieces of information are:

String Name
String Type (Aircraft Carrier, Battleship, Frigate, Submarine, PT Boat)
String Service number (USN ship service numbers contain both letters and
numbers) Int Size (Based on the board game Battleship this is the number of
pegs/hits the ship can take)

After creating the structure you will create at least 10 instances of the
structure and populate it with information of currently active (when possible)
U.S. Navy warships (links provided below). Just hard code the values, don't
worry about user input for this part of the program. You can pull the
information in from a text file if you want to.

Aircraft Carriers:
https://www.navy.mil/Resources/Fact-Files/Display-FactFiles/Article/2169795/aircraft-carriers-cvn/

Battleships:
https://www.history.navy.mil/our-collections/photography/us-navy-ships/battleships.html
(Battleships were phased out of the Navy several decades ago, while not a direct
replacement these are some of the largest ships in the current Navy.) (( USS
Wyoming is at the bottom of the page.))

Frigates:
https://www.navy.mil/Resources/Fact-Files/Display-FactFiles/Article/2169871/destroyers-ddg/
(Destroyers serve a similar role to frigates, the difference is usually in the
number of weapons and amount of armor.)

Submarines:
https://www.csp.navy.mil/SUBPAC-Commands/Submarines/Attack-Submarines/ (Pick
whichever class of submarine on this page you want. (FYI, the page may take a
while to load.))

PT Boat: http://www.hazegray.org/navhist/pt/
(Information about PT Boats is now hard to find, and most were unnamed, pick
what you want from one of the provided lists. Just use the service number for
both the service number and name.)




Create a function that places the structures into an array of structures, and
then sorts the array by type.  This can be done in the same function or you can
pass the array to a new function for the sorting.

In addition, create another function that will accept this array as a parameter,
and can search through the array either by ship name (a list of the ships should
be provided to the user (print the names to the screen for the user to see)), or
by type.

The sorting and searching should be accessed through a menu that is presented to
the user.

As part of the menu create a display function that prints the first five
elements of the array to the screen, pauses (you can use cin.ignore(); and then
cin.get();), and after waiting for the user to prompt it, prints the second set
of five elements to the screen.  

A second display function should be called to display all information for a ship
when searched for either by name or ship type.

When run the program should prompt the user to display, sort or search the list
of ships or to quit the program. After performing any of these options, save for
quitting, the user should be returned to the menu. 

When complete: Take screen captures of your base menu, display the unsorted
array and screen capture the first five elements, sort the array and screen
capture the first five elements, then search for one ship by name.




Hint: Remember that the program is going to look at the ASCII value of the
characters, not the characters themselves.*/

#include <iostream>

int main() { std::cout << "Hello World!\n"; }