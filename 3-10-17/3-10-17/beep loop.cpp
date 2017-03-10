#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
void randbeep();
int main() {
	for (int i = 0; i < 300; i++)
		randbeep();
}
void randbeep() {
	int number = rand() % 1600;
	int number2 = rand() % 2000;
	Beep(number, number2);
}