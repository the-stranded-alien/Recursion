//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// Take as input N, the size of array.
// Take N more inputs and store that in an array.
// Take as input M, a number. Write a recursive function
// which returns an array containing indices of all items
// in the array which have value equal to M.
// Print all the values in the returned array.

void allIndices(int a[], int N, int M) {
	if (N < 0) return;
	allIndices(a, N - 1, M);
	if (a[N] == M) cout << N << " ";
}

int main() {
	int N, M;
	int a[10000];
	cin >> N;
	for (int i = 0; i < N; i++) cin >> a[i];
	cin >> M;
	allIndices(a, N, M);
	return 0;
}