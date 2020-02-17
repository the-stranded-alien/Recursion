//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

// Given a brick wall of (4 * N), and tiles of size (4 * 1),
// you have to find out the total number of ways to arrange tiles on the wall.

#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n) {
	if (n == 1 || n == 2 || n == 3) return 1;
	if (n == 4) return 2;
	return (numberOfWays(n - 1) + numberOfWays(n - 4));
}

int main() {
	int N;
	cout << "Enter N : ";
	cin >> N;
	cout << numberOfWays(N) << endl;
	return 0;
}