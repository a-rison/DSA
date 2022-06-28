#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
	for (string value : s) {
		cout << value << endl;
	}
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << (*it) << endl;
	}
}

int main() {
	//Sets are just maps but without value
	//Same as maps set also stores only unique keys
	//sets have same time complexity as maps for insertion
	set <string> s;
	s.insert("abc");
	s.insert("zsdf");//O(log(n))
	s.insert("bcd");

	//to find an element
	//time complexity O(log(n))
	auto it = s.find("abc");//this will return the iterator of the key
	if (it != s.end()) {//always use check as if it goesw wrong we will get segmentation error
		cout << (*it) << endl;
	}

	//to erase an element set use erase func same as maps
	s.erase("abc");
	s.erase(it);
	//we can pass both iterator and key in erase func
	print(s);

	/*
	Given N strings, print unique strings
	in lexographical order
	N <= 10^5
	|S| <= 100000
	*/
	set<string> st;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string x;
		cin >> x;
		st.insert(x);
	}
	print(st);
}