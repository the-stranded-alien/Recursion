//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
	if (n == 1) return;
	for (int j = 0; j <= n - 2; j++) {
		if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
	}
	bubbleSort(a, n - 1);
}

void bubbleSortRec(int a[], int j, int n) {
	// Base Case
	if (n == 1) return;
	if (j == n - 1) return bubbleSortRec(a, 0, n - 1);

	// Rec Case
	if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
	bubbleSortRec(a, j + 1, n);
	return;
}

int main() {
	int a[] = {5, 4, 3, 2, 1};
	int n = 5;
	bubbleSort(a, n);
	for (int i = 0; i < n; i++)cout << a[i] << " ";
	return 0;
}