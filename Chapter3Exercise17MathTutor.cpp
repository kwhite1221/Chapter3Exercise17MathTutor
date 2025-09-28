/*
Project Name: Chapter 3 Exercise 17 Math Tutor
Programmer: Kristen White
Date: 9/28/25
Requirements: Write a program that can be used as a math tutor for a 
young student. The program should display two random numbers to be 
added. The program should then pause while the student works on the 
problem. When the student is ready to check the answer, he or she can
press a key and the program will display the correct solution.
*/

#include <iostream> //we will always need this library for writing
// to the console and reading from the keyboard
#include <cstdlib> // this is for rand() and srand()
#include <ctime> // this is for time()
using namespace std; // we use this to simplify commands

int main()
{
	srand(time(0)); // this is a random number generator

	// generate two random numbers from 0 to 999
	int num1 = rand() % 900 + 100; // a three digit number
	int num2 = rand() % 900 + 100; // another three digit number

	// display the equation
	cout << "Solve this addition problem: \n \n";
	cout << "   " << num1 << endl; // shows the first number, 
	// spaces to line up the numbers
	cout << " + " << num2 << endl; // shows the second number

	// pause until student presses Enter
	cout << "Press Enter to see the answer: ";
	cin.get(); // waiting for Enter

	// show the answer
	cout << endl;
	cout << "   " << num1 << endl; // shows the first number again
	// spaces to line up the number
	cout << " + " << num2 << endl; // shows the second number again
	cout << "-------" << endl; // the equals line
	cout << "  " << num1 + num2 << endl; // shows the answer

	return 0; // it is best to have a return statement if the module
	// is defined as returning a value
}