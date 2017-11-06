#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::to_string;

#include <climits>
#include <cfloat>

#include "validateInput.hpp"

/*************************************************************
* Description: This function takes in a string and then checks
* each character within the string to see if it is in the range
* 0 to 9. If it is, it returns true. If it is not, it exits the
* while loop and returns false.
*************************************************************/
bool checkStringToInt(string stringIn)
{
	if (stringIn == "")
	{
		return false;
	}
	for (char c : stringIn)
	{
		int asciiValue = int(c);
		if (asciiValue < 48 || asciiValue > 57)
		{
			return false;
		}
	}
	return true;
}

/*************************************************************
* Description: This function takes in a string and then checks
* to see if the size of the int is within the valid size of an int.
* If it is not, it returns -1. Otherwise, it returns the int.
*************************************************************/
int getInt(string stringIn)
{
	if (checkStringToInt(stringIn))
	{
		string maxInt = to_string(INT_MAX);
		if (stringIn.length() < maxInt.length())
		{
			int validInt = stoi(stringIn);
			if (validInt > INT_MAX || validInt < INT_MIN)
			{
				return -1;
			}
			return validInt;
		}
	}
	return -1;
}

/*************************************************************
* Description: This function takes in a string and then checks
* to see if the size of the int is within the valid size of a double.
* If it is not, it returns -1. Otherwise, it returns the double.
*************************************************************/
double getDouble(string stringIn)
{
	int period = stringIn.find('.');
	string quotient = stringIn.substr(0, period),
		dividend = stringIn.substr(period + 1, stringIn.size() - period - 1);
	if (checkStringToInt(quotient) && checkStringToInt(dividend))
	{
		string maxDouble = to_string(DBL_MAX);
		if (stringIn.length() < maxDouble.length())
		{
			double validDouble = stod(stringIn);
			if (validDouble > DBL_MAX || validDouble < DBL_MIN)
			{
				return -1;
			}
			return validDouble;
		}
	}
	return -1;
}

/*************************************************************
* Description: This function asks the user to enter an int
* and then it validates that it is a possible integer. If it is
* not, it continues to ask the user for a valid integer until
* one is entered.
*************************************************************/
void getNum(int &numIn)
{
	bool valid = false;
	string validateInput;
	int num;
	do
	{
		//cout << "Please enter an integer: "; Taken out for RPSGame
		getline(cin, validateInput);
		if (validateInput[0] == '-')	// If the number entered is negative
		{	// This turns it negative
			num = -1 * getInt(validateInput.substr(1, validateInput.length()));

			if (!checkStringToInt(validateInput.substr(1, validateInput.length()))
				|| getInt(validateInput.substr(1, validateInput.length())) == -1)
			{
				cout << "Please enter a valid int: ";
			}
			else
			{
				valid = true;
			}
		}
		else	// If the number entered is positive
		{
			num = getInt(validateInput);

			if (!checkStringToInt(validateInput)
				|| getInt(validateInput) == -1)
			{
				cout << "Please enter a valid int: ";
			}
			else
			{
				valid = true;
			}
		}
	} while (!valid);

	numIn = num;
}

/*************************************************************
* Description: This function places a true or false bool value
* into a bool variable if the user enters either a y or n.
*************************************************************/
void getYesNo(bool &choice)
{
	string yesNoChoice;
	do
	{
		getline(cin, yesNoChoice);
		if (tolower(yesNoChoice[0]) != 'y'
			&& (tolower(yesNoChoice[0]) != 'n'
				|| yesNoChoice.length() != 1))
		{
			cout << "Please enter either 'y' or 'n'." << endl;
		}
	} while (tolower(yesNoChoice[0]) != 'y'
		&& (tolower(yesNoChoice[0]) != 'n'
			|| yesNoChoice.length() != 1));

	if (tolower(yesNoChoice[0]) == 'y')
	{
		choice = true;
	}
	else
	{
		choice = false;
	}
}