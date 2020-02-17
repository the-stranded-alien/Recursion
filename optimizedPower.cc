//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int fastPower(int a, int b) {
	if (b == 0) return 1;

	int smallAns = fastPower(a, b / 2);
	smallAns *= smallAns;

	if (b & 1) return a * smallAns;
	else return smallAns;
}

int main() {
	int a;
	int b;
	cout << "Enter a & b : ";
	cin >> a >> b;
	cout << fastPower(a, b);
	return 0;
}