//0011
#include<iostream>
using namespace std;

int main() {

	int x[10];
	// get 10 val and mod
	for (int i = 0; i < 10; i++) {
		cin >> x[i];
		x[i] = x[i] % 42;
	}

	int n = 10; //count if same

	// check
	for (int i = 0; i < 10; i++) {
		if (x[i] != -1) {
			for (int j = 0; j < 10; j++) {

				if (x[i] == x[j] && i != j) {
					n--;
					x[j] = -1;
				}
			}

		}
	}

	cout << n;
	return 0;
}