//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *ary, int i, int n, int key) {
	if (i == n) return -1;
	if (ary[i] == key) return i;
	return linearSearch(ary, i + 1, n, key);
}

int main() {
	int ary[] = {1, 3, 2, 6, 8, 0};
	int n = sizeof(ary) / sizeof(int);
	int x;
	cout << "Enter The Number To Find : ";
	cin >> x;
	cout << linearSearch(ary, 0, n, x);
	return 0;
}