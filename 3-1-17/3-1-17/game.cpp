//Jay and Luke Moore
#include <iostream>
#include <string>
using namespace std;
string input;
int sc = 5;
int main() {
	while (sc > 0) {
		cout << "Whats one of you favorite games?" << endl;
		cin >> input;
		sc = sc - 1;

		if (input == "fallout")
			cout << "That's a good game!" << endl;

		if (input == "advanced warfare")
			cout << "That game is trash!" << endl;
	}
}