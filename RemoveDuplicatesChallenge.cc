//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// Take as input S, a string. Write a function that
// removes all consecutive duplicates. Print the value returned

string duplicateRemover(string s, int start, int end, string result) {
	if (start > end) return result;
	if (s[start] == s[start - 1]) {
		return duplicateRemover(s, start + 1, end, result);
	}
	else {
		result += s[start];
		return duplicateRemover(s, start + 1, end, result);
	}
}

int main() {
	string s;
	cin >> s;
	string result = "";
	result = duplicateRemover(s, 0, (s.size() - 1), result);
	cout << result;
	return 0;
}

