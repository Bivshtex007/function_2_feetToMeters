#include <iostream>
#include <cmath>
using namespace std;

float meters(float feet) {

	feet = feet/3.28;
	return feet;

}

int main () {

	float feet;
	cout << "Enter the amount of Feet" << endl;
	cin >> feet;
	cout << "It will be " << meters(feet) << " meters" << endl;
	return 0;

}