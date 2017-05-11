#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
void monster();
int main() {
	srand(time(NULL));
	monster();

}
void monster() {// definition
			  //cout << "flag1";
	int number = rand() % 100 + 1;
	if (number < 30) {
		cout << "a Dragon appeared!." << endl << endl;
		cout << "it left for some reason..." << endl << endl;
		system("pause");
	}//if statment
	if (number > 30 && number < 80) {
		cout << "a candy monster appeared!" << endl << endl;
		cout << "tastes like vanilla." << endl << endl;
		system("pause");
	}// if statment
	if (number > 80 && number < 101) {
		cout << "a wild armageddon appeared!" << endl << endl;
		cout << "apon catching sight of you it starts the apacolypse." << endl << endl;
		system("pause");
	}//if statment
}//end of definition