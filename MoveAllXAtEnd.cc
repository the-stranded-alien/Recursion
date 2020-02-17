//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// Take as input str, a string. Write a recursive function
// which moves all ‘x’ from the string to its end.
// E.g. for “abexexdexed” return “abeedeedxxx”.

void moveAllX(char *s, int c, int i, int x, char *result) {
	if (s[c] == '\0') {
		result[c] = '\0';
		return;
	}
	if (s[c] == 'x') {
		result[x] = 'x';
		return moveAllX(s, c + 1, i, x - 1, result);
	}
	else {
		result[i] = s[c];
		return moveAllX(s, c + 1, i + 1, x, result);
	}
}

int main() {
	char s[1000];
	cin >> s;
	char result[1000];
	int size = 0;
	while (s[size] != '\0') size++;
	moveAllX(s, 0, 0, size - 1, result);
	cout << result;
	return 0;
}