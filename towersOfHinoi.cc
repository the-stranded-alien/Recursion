//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void towerOfHinoi(int n, char src, char dest, char helper) {
	// Base Case
	if (n == 0) return;

	// Rec Case
	// First Step (N-1) disks move from source to helper
	towerOfHinoi(n - 1, src, helper, dest);
	cout << "Move " << n << " disk from " << src << " to " << dest << endl;
	towerOfHinoi(n - 1, helper, dest, src);
}

int main() {
	int n;
	cin >> n;
	towerOfHinoi(n,'A','C','B');
	return 0;
}