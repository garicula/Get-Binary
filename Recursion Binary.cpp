// Garrick Morley
// CPSC 200 Project 6 B
// This program uses recursion to print an integer as a binary number

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

//recursive funtion to find a binary from an int
int printBinary(int n)
{
	int binary;
	
	//base case is 0
	if (n == 0)
      binary = 0;
   	else
      binary = n % 2 + 10 * (printBinary(n / 2));
}

//test the above function in main
main()
{
	int n;
	
	//get an integer from the user
	cout << "Enter an integer: " << endl;
	cin >> n;
	
	//print the result of the above function
	cout << "The binary of " << n << " is: " << printBinary(n) << endl;
}

