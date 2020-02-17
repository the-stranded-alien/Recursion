//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int fibbonaci(int n) {
	if (n == 0 || n == 1) return n;
	return (fibbonaci(n - 1) + fibbonaci(n - 2));
}

int main() {
	int n;
	cout << "Enter n : ";
	cin >> n;
	cout << "nth fibbonaci number -> " << fibbonaci(n) << endl;
	return 0;
}