#include <iostream>
#include <cmath>

using namespace std;

int main() {

	char size_coffee, ans;
	double  scoffee = 3.99, mcoffee = 4.99, lcoffee = 5.99;
	int numofcofeee = 0, snumofcofeee = 0, mnumofcofeee = 0,  lnumofcofeee =0;

	cout << "Would you like to purchase coffee (y/n)" << endl;
	cin >> ans;
	ans = ans - 32;

	while (ans != 'Y' && ans != 'N') {
		cout << "Please enter either y or n" << endl;
		cin >> ans;
		ans = ans - 32;
	}

	if (ans == 'N') {
		cout << "You have purchased " << numofcofeee << " coffee(s)" << endl;
		cout << "Your total is: $" << (scoffee * snumofcofeee) + (mcoffee * mnumofcofeee) + (lcoffee * lnumofcofeee) << endl;
		cout << "Please come again" << endl;
		return 0;
	}
	do {
		cout << "What size coffee would you like to purchase (s/m/l)" << endl;
		cin >> size_coffee;
		size_coffee = size_coffee - 32;

		while (size_coffee != 'S' && size_coffee != 'M' && size_coffee != 'L') {
			cout << "Please enter either s, m or l" << endl;
			cin >> size_coffee;
			size_coffee = size_coffee - 32;
		}

		if (size_coffee == 'S') {
			snumofcofeee++;
			cout << "That will be: $" << scoffee << endl;
		}
		else if (size_coffee == 'M') {
			mnumofcofeee++;
			cout << "That will be: $" << mcoffee << endl;
		}
		else if (size_coffee == 'L') {
			lnumofcofeee++;
			cout << "That will be: $" << lcoffee << endl;
		}

		cout << "Would you like to purchase another coffee (y/n)" << endl;
		cin >> ans;
		ans = ans - 32;

		while (ans != 'Y' && ans != 'N') {
			cout << "Please enter either y or n" << endl;
			cin >> ans;
			ans = ans - 32;
		}

		numofcofeee++;
	} while (ans == 'Y');

	if (ans == 'N') {
		cout << "You have purchased " << numofcofeee << " coffee(s)" << endl;
		cout << "Your total is: $" << (scoffee*snumofcofeee) + (mcoffee * mnumofcofeee) + (lcoffee * lnumofcofeee) << endl;
		cout << "Please come again" << endl;
		return 0;
	}

	return 0;
}

