/***********************************************
* COMP-1431 Computer Programming II            *
* Assignment 1, Question 1                     *
* Matthew Brown, Student ID: 1126992           *
***********************************************/
#include <iostream>
#include <array>
using namespace std;

int main() {

	unsigned int a; // die 1
	unsigned int b; // die 2
	unsigned int sum; // sum of the two dice
	const size_t arraySize{ 13 }; // ignore element at index zero, index one should also be empty (it is impossible to roll a one on two dice)
	array<unsigned int, arraySize>frequency{}; // initialize all elemends of the array to 0
	int total{ 0 }; //sum of number of rolls

	// for loop for roll two dice 
	for (unsigned int roll{ 1 }; roll <= 36'000'000; ++roll) {
		a = 1 + rand() % 6; // generate a random number from 1 to 6
		b = 1 + rand() % 6;// generate a second random number from 1 to 6
		sum = a + b; // total of the two random numbers
		++frequency[sum];
	}

	// output of dice totals
	cout << "Face :: " << "Frequency" << endl;
	for (size_t j{ 1 }; j < frequency.size(); ++j) {
		cout << j << " :: " << frequency[j] << endl;
	}
	cout << endl;

	// check to see if outputs are reasonable
	// there should be no results for a total of 1
	if (frequency[1] == 0)
		cout << "There are no results for a 1.  This is what we would expect rolling two dice." << endl;
	else
		cout << "Something went wrong! I found a way to roll a 1 on two dice, this should be impossible." << endl;
	cout << endl;

	// double check the totals rolled
	// the sum of all frequencies should equal 36,000,000
	for (int item{ 1 }; item < frequency.size(); ++item) {
		total += frequency[item];
	}
	cout << "The total number of rolls is " << total << "." << endl;
	if (total == 36'000'000)
		cout << "This is the correct number of rolls." << endl;
	else
		cout << "Oh no! Something went wrong." << endl;
	cout << endl;
	
	// we expect that approximately 1/6 (0.166) of the rolls to be 7
	double x = (double(frequency[7])) / 36'000'000;
	cout << "We expect that approximately 0.166 of the rolls to be 7." << endl;
	cout << "The percentage of 7's rolled is " << x << "." << endl;
	if (x > 0.15 && x < 0.17)
		cout << "This is within our expected range (0.15 - 0.17) for the frequency of rolling a 7." << endl;
	else
		cout << "The frequency of rolling a 7 is outside of our expected range (0.15 - 0.17)" << endl;

	return 0;
}