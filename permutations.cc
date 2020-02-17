//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void permute(char *in, int i) {
	// Base case
	if (in[i] == '\0') {
		cout << "Permutation : " << in << endl;
		return;
	}
	// Rec case
	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i], in[j]);
		permute(in, i + 1);
		// Backtracking - To restore the original array
		swap(in[i], in[j]);
	}
}

int main() {
	char in[100];
	cout << "Enter String : ";
	cin >> in;
	permute(in, 0);
	return 0;
}