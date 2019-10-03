// week2lab2.cppby Dhruv Dahiya : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string ConvertUpper(string s);
int main() {
	string msg = "SOS";
	string uppermsg;
	string substr;
	int errcounter{ 0 };
	do {		cout << "Enter your message \n";		getline(cin, msg);		uppermsg = ConvertUpper(msg);		for (int i = 0; i < msg.length(); i = i + 3) {			if (i + 3 <= uppermsg.length()) {				substr = uppermsg.substr(i, 3);				cout << substr << endl;				if ((int)substr.at(0) != 83)					errcounter++;				if ((int)substr.at(1) != 79)					errcounter++;				if ((int)substr.at(2) != 83)					errcounter++;			}		}		cout << "the error is: " << errcounter << endl;	} while (msg.length() < 1 || msg.length() > 99);	return 0;
}
string ConvertUpper(string s) {

	std::for_each(s.begin(), s.end(), [](char& c) {
		c = ::toupper(c);
		});
	return s;
}


