#pragma once
#include <iostream>
#include <string>
using namespace std;

class Address {

private:
	//data members for storing address information (street number, street name, city name, and province name
	int StreetNum;
	string StreetName;
	string City;
	string Province;

public:
	//function to set the address
	void SetAddress(int StreetNum, string StreetName, string City, string Province) {
		this -> StreetNum = StreetNum;
		this-> StreetName = StreetName;
		this-> City = City;
		this-> Province = Province;
	}
	//function to get the address
	string GetAddress() {
		string address = "Street Number: " + to_string(StreetNum);
		address += "\nStreet Name: " + StreetName;
		address += "\nCity: " + City;
		address += "\nProvince: " + Province;

		return address;
	}
};
