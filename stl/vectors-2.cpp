#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) {
	cout << "size: " << v.size() << endl;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	/*
	vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
	printVec(v);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}
	printVec(v);
	*/

	/*
	//Array of vectors
	//2d array with fixed no of rows and varrying no of collumns
	int N;
	cin >> N;
	vector<int> v[N];
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	for (int i = 0; i < N; ++i) {
		printVec(v[i]);
	}
	*/

	//Vector of vectors
	//2d array with no of both rows and collumns varrying
	int N;
	cin >> N;
	vector<vector<int>> v;
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		vector<int> x;
		for (int j = 0; j < n; ++j) {
			int y;
			cin >> y;
			x.push_back(y);
		}
		v.push_back(x);
	}
	/*
	//another way
	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;
		v.push_back(vector<int, int> ());
		for (int j = 0; j < n; ++j) {
			int y;
			cin >> y;
			v[i].push_back(y);
		}
	}
	*/
	for (int i = 0; i < v.size(); ++i) {
		printVec(v[i]);
	}
}