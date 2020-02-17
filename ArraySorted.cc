//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n) {
	if (n == 1) return true;
	if (a[0] < a[1] && isSorted(a + 1, n - 1)) return true;
	return false;
}

int main() {
	int array[] = {1, 2, 3, 5, 7};
	int n = 5;

	if (isSorted(array, n)) cout << "Yes Sorted\n";
	else cout << "Not Sorted\n";

	return 0;
}