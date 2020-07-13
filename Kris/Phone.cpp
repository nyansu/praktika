#include "Phone.h"
#include "Phone.h"
#include <iostream>
using namespace std;

Phone::Phone() {

	phoneNumber = 0;
	strcpy_s(nameOfOwner, "none");
	serialNumber = 0;
	isBroken = false;
}

Phone::Phone(const Phone* _phone) {

	phoneNumber = _phone->phoneNumber;
	strcpy_s(nameOfOwner, _phone->nameOfOwner);
	serialNumber = _phone->serialNumber;
	isBroken = _phone->isBroken;
}

Phone::Phone(const int _phoneNumber, const char _nameOfOwners[], const int _serialNumber, const bool _isBroken) {

	phoneNumber = _phoneNumber;
	strcpy_s(nameOfOwner, _nameOfOwners);
	serialNumber = _serialNumber;
	isBroken = _isBroken;
}

Phone::~Phone() {

	phoneNumber = -1;
	strcat_s(nameOfOwner, "");
	serialNumber = -1;
	isBroken = -1;
}

void Phone::input() {
	cout << "Input phone number: ";
	cin >> phoneNumber;

	cout << "Input owner's name: ";
	cin >> nameOfOwner;

	cout << "Input serial number: ";
	cin >> serialNumber;

	cout << "Input phone's status (0 = working, 1 = broken): ";
	cin >> isBroken;
	cout << endl;
}

void Phone::output() {
	cout << "Phone number: " << phoneNumber << endl;
	cout << "Owner's name: " << nameOfOwner << endl;
	cout << "Serial number: " << serialNumber << endl;
	if (isBroken)
	{
		cout << "Phone's status: " << "broken" << endl;
	}
	else
	{
		cout << "Phone's status: " << "working" << endl;
	}
	cout << endl;
}
