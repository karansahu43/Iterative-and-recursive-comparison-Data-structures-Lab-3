// Author:                      Karan Sahu
// Assignment Number:           Lab 3
// File Name:                   timeTrialDriver.cpp
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku
//
// This program calculates 2^k with recursion

#include <cmath>
#include <math.h>
#include <iostream>

using namespace std;


// This function calculates 2^k with recursion taking in the parameter of power(k) and returning 2^k
unsigned long long int recursivePower2 ( int power)
{
	if (power == 0)
	{
		return 1;
	}
	
	else
	{
		return (2*recursivePower2(power-1));
	}
	
}

//int main()
//{
//	bool neg = false;
//	int input;
//	double answer;
//	
//	cout << "This calculates 2 to the kth power." << endl;
//	cout << "Please enter a integer k:";
//	cin >> input;
//	if(input < 0)
//	{
//		neg = true;
//		input = input *-1;
//	}
//	
//	answer = recursivePower2(input);
//	
//	if(neg == true)
//		answer = 1/answer;
//	cout << "2^" << input << " = " << answer;
//	
//	return 0;
//	
//}
