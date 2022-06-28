#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);// two inputs are needed one is address of starting element and other one is address of next of the last element
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	} cout << endl;
}