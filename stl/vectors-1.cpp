#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) {//while passing values in funtion we must use reference because passing by value is very expensive operation
	cout << "size: " << v.size() << endl; //time complexity O(1)
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
	v.push_back(2);
}

//locally vectors can't be bigger than 10^5
//and globally vectors cannot be declared greater than 10^7

int main() {
	/*
	int a[10];//an array of size 10
	vector<int> v;//vector is also an array but with varrying size
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		printVec(v);//this will show that vectors are dynamic
		v.push_back(x); //O(1)
	}
	*/
	vector<int> v1(10);//this create a vector of size 10 with 0 at all positions
	v1.push_back(7);//this will add 7 to the end of v1 and size of v1 will increse to 11
	//00000000007 :output

	vector<int> v2(10, 3); //this will create a vector of 10 with 3 at all of it's positions
	printVec(v1);
	v1.pop_back();//removes the last element of the vector
	printVec(v1);
	vector<int> v3 = v2;//we can creat copy of vectors but not array
	//time complexity O(n)
	printVec(v2);
	printVec(v2);
}