#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
void badguy();
int main() {
	
	while (1) {
		badguy();
		system("pause");
	}
}
void badguy() {
	int x = rand() % 100 + 1;
	if (x <= 50)
		cout << "goomba!" << endl;
	if (x > 50 && x < 80)
		cout << "koopa!" << endl;
	if (x > 80 && x <= 100)
		cout << "shy guy!" << endl;
}