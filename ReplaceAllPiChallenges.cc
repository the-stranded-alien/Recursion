//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

string replacePi(string s, int start, int end, string result) {
	if (start > end) return result;
	if (s[start] == 'p' && s[start + 1] == 'i') {
		result += "3.14";
		return replacePi(s, start + 2, end, result);
	}
	else {
		result += s[start];
		return replacePi(s, start + 1, end, result);
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		string result = "";
		result = replacePi(s, 0, (s.size() - 1), result);
		cout << result << endl;
	}
	return 0;
}