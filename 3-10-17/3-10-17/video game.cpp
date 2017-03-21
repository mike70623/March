#include <iostream>
#include <string>
using namespace std;
int main() {
int sc = 5;
string game;
while (sc > 0) {




	cout << "what games you like?" << endl;
	cin >> game;
	sc = sc - 1;


	if (game == "Fire Emblem")
		cout << "thats a good game." << endl << endl;
	if (game == "Sonic Adventure")
		cout << "like those glitches huh?" << endl;
	

}
}