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
	for (int &value : v) {//we should use reference as it will not make a copy and timecomplexity will be saved
		cout << value << " ";
	} cout << endl;

	vector<pair<int, int>> v_p = {{1, 2}, {4, 1}, {6, 6}};
	for (auto &value : v_p) {
		cout << value.first << " " << value.second << endl;
	}
}