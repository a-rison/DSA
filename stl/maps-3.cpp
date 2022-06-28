#include<bits/stdc++.h>
using namespace std;

int main() {
	//Nesting in maps
	//Nesting of pairs in maps
	map<pair<int, int>, int> m;
	pair<int, int> p1, p2;
	p1 = {2, 2};
	p2 = {2, 3};
	cout << (p1 < p2) << endl; //here both pairs will be compared first no will be compared first then the second one
	//here first no is same so second no is compared and p2>p1

	//Nesting of sets in maps
	map<set<int>, int> m_s;
	set<int> s1 = {1, 2, 3};
	set<int> s2 = {2, 3};
	cout << (s1 < s2) << endl;
	//In sets also firstly first element will be compared is that is same then further second
	//and third will be compared

	map<pair<string, string>, vector<int>> m_c;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string fn, ln;
		int ct;
		cin >> fn >> ln >> ct;
		for (int j = 0; j < ct; ++j) {
			int x;
			cin >> x;
			m_c[ {fn, ln}].push_back(x);
		}
	}
	for (auto &pr : m_c) {
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout << full_name.first << " " << full_name.second << endl;
		cout << list.size() << endl;
		for (auto &l : list) {
			cout << l << " ";
		} cout << endl;
	}
}
