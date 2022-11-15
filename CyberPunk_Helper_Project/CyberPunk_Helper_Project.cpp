// CyberPunkHelp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int menu();
bool isNumber(string isItNumber);
int main()
{
	bool runing = true;
	while (runing) {
		menu();
		runing = false;
	}

}

int menu() {
	int answer = 0;
	vector<string> test = { "test 1","test 2","test 3","test 4" };
	int number = 1;
	for (auto& e : test) {
		string number_ = std::to_string(number);
		number_ = number_ + ") " + e;
		cout << number_ << endl;
		number++;
	}
	cout << "enter the choice";
	string choice;
	cin >> choice;
	bool isItNumber = isNumber(choice);
	if (isItNumber) {
		answer = stoi(choice);
		cout << "its a number";
	}
	else {
		int i = 0;
		for (auto& e : test) {
			if (e == choice) {
				answer = i;
				return answer;
			}
			i++;
		}
		cout << "its not a option";
	}

	return answer;

}



//verifi si on peut le transformer en int ou si on doit le considerer comme un string
bool isNumber(string isItNumber) {
	for (int i = 0; i < isItNumber.length(); i++) {
		if (!std::isdigit(isItNumber[i])) {
			return false;
		}
	}
	return true;
}