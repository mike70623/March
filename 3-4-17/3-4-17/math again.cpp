#include<iostream>
#include <Windows.h>
using namespace std;
int x;
int y;
int z;

void math(int x, int y, int z);
int main() {
	cout << "three numbers please" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	math(x, y, z);
}
void math(int x, int y, int z) {
	if ((x > y) && (y > z) && (z < x) && (z < y))
		cout << x << y << z << endl;
	else if ((x > y) && (y < z) && (z < x) && (z > y))
		cout << x << z << y << endl;
	else if ((x > y) && (y < z) && (z > x) && (z > y))
		cout << z << x << y << endl;
	else if ((x < y) && (y < z) && (z > x) && (z > y))
		cout << z << y << x << endl;
	else if ((x < y) && (y > z) && (z > x) && (z < y))
		cout << y << z << x << endl;
	else if ((x < y) && (y > z) && (z < x) && (z < y))
		cout << y << x << z << endl;
}