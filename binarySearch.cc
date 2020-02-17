//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int ary[], int start, int end, int key) {
	if (end >= start) {
		int mid = (start + end) / 2;
		if (ary[mid] == key) return mid;
		else if (ary[mid] > key) return binarySearch(ary, start, mid - 1, key);
		else return binarySearch(ary, mid + 1, end, key);
	}
	else return -1;
}

int main() {
	int ary[] = {1, 2, 3, 6, 8, 10};
	int n = sizeof(ary) / sizeof(int);
	int x;
	cout << "Enter The Number To Find : ";
	cin >> x;
	cout << binarySearch(ary, 0, n - 1, x);
	return 0;
}