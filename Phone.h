#pragma once

/*
Phone.h

Jazmin Even Dorra

Specification file for the following classes:
	- Phone, USPhone, InterPhone
*/

// Header files
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

//Base class
class Phone
{
protected:
	int areaCode;
	int number;
	string phoneType;

public:
	//constructor
	Phone()
	{}
	Phone(int ac, int n, string t)
	{
		areaCode = ac;
		number = n;
		phoneType = t;
	}
	
	void splitPhone(int& nP1, int& nP2)
	{
		int digit[10];

		for (int i = 0; i < 10; i++)
		{
			digit[i] = number % 10;
			number = number / 10;
		}

		nP1 = digit[0] + digit[1] + digit[2];
		nP2 = digit[3] + digit[4] + digit[5];

		cout << nP1;
	}

	// Virtual function
	virtual void dispPhone() = 0;
};

// US Phone class
class USPhone : public Phone
{
	public:
		// Constructor
		USPhone(int ac, int n, string t)
		{
			areaCode = ac;
			number = n;
			phoneType = t;
		}

		void dispPhone()
		{
			cout << "US " << phoneType << " Phone:\t\t" << left << setw(1) <<"+1 " << "(" << areaCode << ") "
				<< number;
		}
};

//International Phone class
class InterPhone : public Phone
{
protected:
	int countryCode;
	string countryName;
public:
	//Constructor
	InterPhone(int cc, string cn, int ac, int n, string t)
	{
		countryCode = cc;
		countryName = cn;
		areaCode = ac;
		number = n;
		phoneType = t;
	}
	void dispPhone()
	{
		cout << countryName << phoneType << " Phone: \t" << left << setw(1) << "+" << countryCode << " (" << areaCode << ") "
			<< number;
	}
};
