/*

phones.cpp

This program will display mini phone book using derived and specialized classes.

*/

//Header files
#include <iostream>
#include "Phone.h"
using namespace std;

int main()
{
	//define array of pointers to Phone
	Phone* array[5];

	//intro
	cout << "My Mini Phone Book ...\n";

	// Dynamically allocate objects
	array[0] = new USPhone(305, 4635675, "Home");
	array[1] = new InterPhone(34, "Spain ", 981, 1225478, "Home");
	array[2] = new USPhone(954, 2017743, "Work");
	array[3] = new USPhone(303, 8287965, "Mobile");
	array[4] = new InterPhone(58, "Venezuela ", 414, 7308523, "Mobile");

	// Call each object
	for (int i = 0; i < 5; i++)
	{
		//dispPhone() function
		array[i]->dispPhone();
		cout << endl;
	}
}
