//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void subsequence(char *in, char *out, int i, int j) {
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << " ";
		return;
	}
	subsequence(in, out, i + 1, j);
	out[j] = in[i];
	subsequence(in, out, i + 1, j + 1);
}

int main() {
	char in[100];
	cin >> in;
	char out[100];
	subsequence(in, out, 0, 0);
	int size = 0;
	while (in[size] != '\0') size++;
	cout << "\n" << pow(2, size);
	return 0;
}