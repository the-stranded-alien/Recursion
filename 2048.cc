//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

char spellings[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printInWords(int n) {
	if (n == 0) return;
	printInWords(n / 10);
	cout << spellings[n % 10] << " ";
}

int main() {
	int n;
	cout << "Enter n : ";
	cin >> n;
	printInWords(n);
	return 0;
}