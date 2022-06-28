#include<bits/stdc++.h>
using namespace std;

int main() {
	//pairs
	pair<int, string> p, p1;
	p = make_pair(2, "abc");
	p1 = {3, "bcd"};
	pair<int, string> p2 = p; //here copy of pair p is formed
	pair<int, string> &p3 = p;//here p3 is just the reference variable of p
	cout << p.first << " " << p.second << endl;

	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};
	pair<int, int> p_array[3];
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};
	swap(p_array[0], p_array[2]);
	for (int i = 0; i < 3; ++i) {
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}
}