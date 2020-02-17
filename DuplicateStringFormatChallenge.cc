//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// Take as input str, a string. Write a recursive function which
// returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’.
// E.g. for “hello” return “hel*lo”. Print the value returned

string duplicateStarer(string s, int start, int end, string result) {
	if (start > end) return result;
	if (s[start] == s[start + 1]) {
		result += s[start];
		result += '*';
	}
	else {
		result += s[start];
	}
	return duplicateStarer(s, start + 1, end, result);
}

int main() {
	string s;
	cin >> s;
	string result = "";
	result = duplicateStarer(s, 0, (s.size() - 1), result);
	cout << result;
	return 0;
}