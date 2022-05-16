#pragma once
#include <iostream>
#include "Address.h"
using namespace std;

class Person {

private:
	//gets address from Address.h
	Address address;
	//string to store the first name
	string FirstName;
	//string to store the last name
	string LastName;

public:
	//function to set the name
	void SetName(string FirstName, string LastName) {
		this -> FirstName = FirstName;
		this -> LastName = LastName;
	}
	//gets address and sets address
	void SetAddress(Address address) {
		this->address = address;
	}
	//prints out name information
	void DisplayName() {
		cout << "First Name: " << FirstName << endl;
		cout << "Last Name: " << LastName << endl;
	}
	//prints out address information
	void DisplayAddress() {
		cout << "Address: " << address.GetAddress() << endl;
	}
};
