//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void shuffle(int *a, int s, int e) {
	srand(time(NULL));
	int i, j;
	for (int i = e; i > 0; i--) {
		// Create one random index
		j = rand() % (i + 1);
		swap(a[i], a[j]);
	}
}

int partition(int *a, int s, int e) {
	int i = s - 1;
	int j = s;
	int pivot = a[e];
	for (; j < e; j++) {
		if (a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	// Bring the pivot element to its sorted position
	swap(a[i + 1], a[e]);
	return i + 1;
}

void randomizedQuickSort(int *a, int s, int e) {
	if (s >= e) return;
	int p = partition(a, s, e);
	randomizedQuickSort(a, s, p - 1);
	randomizedQuickSort(a, p + 1, e);
}

int main() {
	int a[] = {2, 1, 5, 6, 7, 5, 8};
	int n = sizeof(a) / sizeof(int);
	cout << "Array : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	shuffle(a, 0, n - 1);
	cout << endl << endl;
	cout << "Shuffled Array : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;
	randomizedQuickSort(a, 0, n - 1);
	cout << "Sorted Array : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}