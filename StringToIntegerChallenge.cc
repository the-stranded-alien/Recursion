//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int stringToInteger(string a, int i, int n, int val) {
	if (i == n + 1) return val;
	val = val + ((a[i] - '0') * pow(10, n - i));
	cout << val << endl;
	return stringToInteger(a, i + 1, n, val);
}

int main() {
	string in;
	int val = 0;
	cin >> in;
	cout << stringToInteger(in, 0, in.size() - 1, val);
	return 0;
}