// Author:                      Karan Sahu
// Assignment Number:           Lab 3
// File Name:                   timeTrialDriver.cpp
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku
//
// This program calculates 2^k with iteration

#include <iostream>
using namespace std;

// This function calculates 2^k with iteration taking in the parameter of power(k) and returns 2^k

unsigned long long int iterativePower2(int power)
{
	unsigned long long int product = 1;
	
	for(int i=0 ; i<power; i++)
	{
		product = product * 2;
		
	}
	

	return product;



}

//int main()
//{
//	while(true)
//	{
//	int power;
//	cout << "Please enter a power: ";
//	cin >> power;
//	
//	cout << endl << "solution: " << iterativePower2( power)<< endl;
//	}
//}
