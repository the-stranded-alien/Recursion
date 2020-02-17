//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

bool subsetSumZero(long long int set[], int n, int sum) {
	if (n == 0) return false;
	subsetSumZero(set, n - 1, sum + set[n]);
	subsetSumZero(set, n - 1, sum);
	if (sum == 0) return true;
}

int main() {
	int t;
	cin >> t;
	for (int test = 0; test < t; test++) {
		int n;
		cin >> n;
		long long int set[10];
		int sum = 0;
		for (int i = 0; i < n; i++) cin >> set[i];
		bool res = subsetSumZero(set, n, sum);
		if (res) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}