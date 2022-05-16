/*****************************************
* COMP-1431 Computer Programming II      *
* Assignment 1, Question 2               *
* Matthew Brown, Student ID: 1126992     *
*****************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void outputVector(const vector<int>& v); // print the vector - will not modify

int main() {

	vector<int> numbers; 
	int x; // value entered by user
	int k = 0; // while loop key
 	for (unsigned int j{ 1 }; j <= 10; ++j) {
		cout << "Enter a value between 1 and 50 for the element: ";
		cin >> x;
		if (x < 1 || x > 50) { // since the assignment requires number to be between 1 and 50 this statement confirms that the entered values are acceptable
			++k;
			while (k != 0) { // this while loop will ask the user to enter a new number until an acceptable number is entered
				cout << "The value must be between 1 and 50!" << endl;
				cout << "Please enter a new value between 1 and 50: ";
				cin >> x;
				if (x > 1 && x < 50)
					--k; // sets the while loop key back to 0, terminating the while loop
			}
		}
		if (j == 1) // the first number will always be unique and thus is added to the vector
			numbers.push_back(x);
		else {
			for (unsigned int v{ 0 }; v <= j; ++v) { // nested for loop to check the entered number against numbers in the vector
				if (find(numbers.begin(), numbers.end(), x) != numbers.end()) // if the number is found in the vector it breaks out of the for loop, not adding the number to the vector
					break;
				else // the number is unique and is added to the vector using the push_back function
					numbers.push_back(x);
			}
		}
	}
	outputVector(numbers); //print out the vector

	return 0;
}

void outputVector(const vector<int>& v) {
	for (auto const& x : v) {
		cout << x << " ";
	}
}