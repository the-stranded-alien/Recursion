#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(long long int *a, int N) {
	if (N == 1) return true;
	if (a[0] <= a[1] && isArraySorted(a + 1, N - 1)) return true;
	return false;
}

int main() {
	int N;
	cin >> N;
	long long int a[1001];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	bool result = isArraySorted(a, N);
	if (result == 1) cout << "true";
	else cout << "false";
	return 0;
}