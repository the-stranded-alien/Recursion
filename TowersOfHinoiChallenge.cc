//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_		

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void towerOfHinoi(int n, char src, char dest, char helper) {
	if (n == 0) return;
	towerOfHinoi(n - 1, src, helper, dest);
	cout << "Moving ring " << n << " from " << src << " to " << dest << endl;
	towerOfHinoi(n - 1, helper, dest, src);
}

int main() {
	int n;
	cin >> n;
	towerOfHinoi(n,'A','B','C');
	return 0;
}