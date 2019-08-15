// Author:                      Karan Sahu
// Assignment Number:           Lab 3
// File Name:                   timeTrialDriver.cpp
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku
//
// This program receives a number from the user. Run that number
// through an iterative and recursive function of 2^K. Time
// the time it takes for the functions to run and then do a comparison
// of the results to display to the user.
//Big N is 64


#include <iostream>
#include <iomanip>
#include <ctime>

#include "Lab3pk2Recursive.cpp"
#include "Lab3pk2Iteration.cpp"

//recursivePower2


using namespace std;
void speedFibRecursive(int, int);
void speedFibIterative(int, int);

//main function displays and calls 2 functions
int main()
{
int number = 0;
int numTrials = 0;

cout << "The Big N for both recursive and iterative is 64" << endl;
cout << "Enter Integer for 2^k: ";
cin >> number;
cout << "Enter Integer of trials for 2^k: ";
cin >> numTrials;

speedFibIterative(number, numTrials);
speedFibRecursive(number, numTrials);

return 0;
}

// Calculates recursive speed and displays information
void speedFibRecursive(int num, int trials)
{
	int sum = 0;
	
	cout << "\n***Recursive Time***\n";
	
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Iterative Time  = " << setw(5) << start << " seconds" << endl; //displays start time
	
	if (trials >0)
	{
		for (int i=0; i<trials; i++)
		{
		recursivePower2(num); //calls fib Recursive and tests number of trials
		}
		
		cout << "2^k number is: " << recursivePower2(num) << endl;
	}
		
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Recursive Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end of recursive fibonacii
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete all iterative trials
	double average = (finish - start)/trials;//finds average time to complete each trial
	cout << "Time Elapsed to do Recursive: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	cout << "Average time to do Recursive trial " << trials << " times: " << setw(5) << average << " seconds" << endl; //displays average time
}

// Calculates iterative speed and displays information

void speedFibIterative(int num, int trials)
{
	int sum = 0;

	cout << "\n***Iterative Time***\n";
	
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Iterative Time  = " << setw(5) << start << " seconds" << endl; //displays start time
	
	if (trials>0)
	{
		for (int i=0; i<trials; i++)
		{
		iterativePower2(num); //calls fib iterative and tests number of trials
		}
		

		cout << "2^k number is: " << iterativePower2(num) << endl;
	}
		
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Iterative Time  = " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end of iterative fibonacci
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time to get time to complete all iterative trials
	double average = (finish - start)/trials;//finds average time of total trial number
	cout << "Time Elapsed to do Iterative: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	cout << "Average time to do Itertive trial " << trials << " times: " << setw(5) << average << " seconds" << endl; //displays average
}

/* Sample output
The Big N for both recursive and iterative is 64
Enter Integer for 2^k: 4
Enter Integer of trials for 2^k: 12312334

***Iterative Time***
Start Iterative Time  = 13.91200 seconds
2^k number is: 16
Finish Iterative Time  = 14.53800 seconds
Time Elapsed to do Iterative: 0.62600 seconds
Average time to do Itertive trial 12312334 times: 0.00000 seconds

***Recursive Time***
Start Iterative Time  = 14.55400 seconds
2^k number is: 16
Finish Recursive Time: 15.08100 seconds
Time Elapsed to do Recursive: 0.52700 seconds
Average time to do Recursive trial 12312334 times: 0.00000 seconds



*/

