//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int lastIndex(long long int *a, int N, long long int M) {
	if (N == 0) return -1;
	if (a[N - 1] == M) return (N - 1);
	else return lastIndex(a, N - 1, M);
}


int main() {
	int N;
	cin >> N;
	long long int a[1001];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	long long int M;
	cin >> M;
	cout << lastIndex(a, N, M);
	return 0;
}