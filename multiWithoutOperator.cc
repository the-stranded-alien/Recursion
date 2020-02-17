//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int product(int n1, int n2) {
	if (n2 == 0) return 0;
	if (n2 > 0) return (n1 + product(n1, n2 - 1));
	else return (-product(n1,-n2));
}

int main() {
	int n1, n2;
	cout << "Enter Two Numbers : ";
	cin >> n1 >> n2;
	cout << product(n1, n2);
	return 0;
}