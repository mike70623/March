#include <iostream>
using namespace std;
int main() {
	char B ='a';
	int total=0;
	while (B != 'q') {
		cin >> B;
		if (B == 'b')
			total++;
		cout << total << endl;
	}
}