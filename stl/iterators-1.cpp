#include <bits/stdc++.h>
using namespace std;

int main() {
	std::vector<int> v = {2, 3, 4, 5, 6};
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	} cout << endl;
	vector<int> ::iterator it = v.begin();
	for (it = v.begin(); it != v.end(); ++it) {
		cout << *(it) << " ";
	} cout << endl;
	//it+1 is next location
	//it++ is next iterator
	vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
	vector < pair<int, int>> :: iterator it1 = v_p.begin();
	for (it1 = v_p.begin(); it1 != v_p.end(); ++it1) {
		cout << (*it1).first << " " << (*it1).second << endl;
	}
	//(*it).first <=> (it->first)
	for (it1 = v_p.begin(); it1 != v_p.end(); ++it1) {
		cout << (it1->first) << " " << (it1->second) << endl;
	}
}