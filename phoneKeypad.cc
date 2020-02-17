//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void printKeypadString(char in[], char out[], int i, int j) {
	// Base Case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// Recursive Case
	int digit = in[i] - '0';
	if (digit == 0 || digit == 1) printKeypadString(in, out, i + 1, j);
	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		out[j] = keypad[digit][k];
		printKeypadString(in, out, i + 1, j + 1);
	}
}

int main() {
	char in[100];
	char out[100];
	cout << "Enter String : ";
	cin >> in;
	printKeypadString(in, out, 0, 0);
	return 0;
}