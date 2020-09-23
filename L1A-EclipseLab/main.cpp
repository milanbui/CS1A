/*******************************************************
 * AUTHOR		: Milan Bui
 * STUDENT ID	: 1129567
 * LAB #1A		: Eclipse Lab
 * CLASS		: CS 1A
 * SECTION		: MTWTH 10:00AM - 1:35PM
 * DUE DATE		: 18 June 2018
 *******************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//Documentation that goes here will be discussed later
int main ()
{
	/***************************************************
	 * CONSTANTS
	 * -------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * -------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 ***************************************************/
	const char PROGRAMMER[]	= "Milan Bui";
	const char CLASS[]		= "CSIA";
	const char SECTION[]	= "MTWTH: 10:00a - 1:35p";
	const char LAB_NUM[]	= "1a";
	const char LAB_NAME[]	= "Eclipse Tutorial";

	// OUTPUT - Class Heading
	cout << left;
	cout << "**********************************************";
	cout << "\n*	PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n*	" << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n*	" << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n*	LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
	cout << "\n**********************************************\n\n";
	cout << right;

	return 0;
}

