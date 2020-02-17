//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_		

// C++ Code

#include<bits/stdc++.h>
using namespace std;

void dec(int n){
	if(n==0) return;
	cout << n << " ";
	dec(n-1);
}

void inc(int n){
	if(n==0) return;
	inc(n-1);
	cout << n << " ";
}

int main(){
	int n;
 	cout << "Enter n : ";
 	cin >> n;
 	cout << "\nIncreasing : ";
 	inc(n);
 	cout << "\nDecreasing : ";
 	dec(n);
	return 0;
}