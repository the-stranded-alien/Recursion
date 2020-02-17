//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void subsequence(char *in, char *out, int i, int j) {

	// Base Case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << "Subsequence : " << out << endl;
		return;
	}

	// Rec Case
	// 1. Include the Current Char
	out[j] = in[i];
	subsequence(in, out, i + 1, j + 1);
	// 2. Exclude the Current Char
	subsequence(in, out, i + 1, j);
}

int main() {
	char in[100];
	cout << "Enter String : ";
	cin >> in;

	char out[100];
	subsequence(in, out, 0, 0);
	return 0;
}