#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &ste) {
	for (string value : ste) {
		cout << value << endl;
	}
	/*
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << (*it) << endl;
	}
	*/
}

int main() {
	//Unordered sets
	//We can use unordered set to find an element in a list as it's time complexity is very low
	multiset <string> s;
	s.insert("abc");
	s.insert("zsdf");//O(1)
	s.insert("bcd");

	print(s);

	//to find an element
	//time complexity O(1)
	auto it = s.find("abc");//this will return the iterator of the key
	if (it != s.end()) {//always use check as if it goesw wrong we will get segmentation error
		cout << (*it) << endl;
	}

	//to erase an element set use erase func same as maps
	// s.erase("abc");// O(1)
	// s.erase(it);
	//we can pass both iterator and key in erase func
//	print(s);

	//Multiset
	//Multimaps allows us to stored multiple values for the same key and it is same for
	//multisets
	multiset<string> s1;
	s1.insert("abc");
	s1.insert("zsdf");
	s1.insert("bcd");
	s1.insert("abc");

	s1.erase("abc");

	print(s1);

	/*
	Given N strings and Q queries.
	In each query you are given a string
	print yes if string is present
	else print no.

	N <= 10^6
	|S| <= 100
	Q <= 10^6
	*/
	/*
	unordered_set<string> st;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string x;
		cin >> x;
		st.insert(x);
	}
	string str;
	cin >> str;
	auto it2 = st.find(str);
	if (it2 != st.end()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	*/
	return 0;
}