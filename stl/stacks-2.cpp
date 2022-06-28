#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', 3}, {']', 1}, {'}', 2}, {')', 3}}
string isBalanced(string st) {
	stack<char> s;
	for (auto v : st) {
		if (symbols[v] < 0) {
			s.push(v);
		} else {
			if (s.empty()) return "no";
			if (symbols[v] + symbols[s.top()] == 0) {
				s.pop();
			} else {
				return "no";
			}
		}
	}
	if (!s.empty()) {
		return "no";
	} else {
		return "yes";
	}
}

int main() {
	//Check wheather the given paranthesis is ballanced or not
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << isBalanced(s) << endl;
	}
}