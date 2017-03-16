#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int num=0;
	int num1=0;
	int sum = 0;
srand(time(NULL));
for (int i = 0; i < 100; i++) {
	int num = rand() % 1000 + 1;
	cout << num << endl;

if (num > num1)
num1=num;
sum = sum + num;
}
cout << "your biggest number is " << num1 << "." << endl;
cout << "your average is " << sum / 100 << endl;
}