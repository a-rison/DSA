#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m) {
	cout << m.size() << endl;
	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
}

int main() {
	//1.inbuilt implementation
	//2. valid key datatype
	//3. time complexity
	unordered_map<int, string> m;
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd"; // O(1)

	//we can also declare maps using inserting pairs
	m.insert({4, "afg"});
	//print(m);

	//Unordered maps uses hashing to insert new elements
	//hashing of pair is not possible hence we cannot create unordered map of pairs


	auto it2 = m.find(3);//this will return iterator of the key 3
	//and key 3 is not in the map then it will return m.end()
	//time complexity O(1)
	m.clear();//clears everything inside a map
	//print(m);

	/*
	Given N strings and Q queries.
	In each query you are given a string
	print frequency of that string.

	N <= 10^6
	|S| <= 100
	Q <= 10^6
	*/

	unordered_map<string, int> m2;
	int n;
	cin >> n;
	for (int i; i < n; ++i) {
		string s;
		cin >> s;
		m2[s]++;
	}

	int q;
	cin >> q;
	while (q--) {
		string s;
		cin >> s;
		cout << m2[s] << endl;
	}

}