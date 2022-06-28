#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m) {
	cout << m.size() << endl;
	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}
}
void printI(map<int, int> &n) {
	cout << n.size() << endl;
	for (auto &pr : n) {
		cout << pr.first << " " << pr.second << endl;//retrieving pair from maps also has time complexity of log(n)
	}//Time complexity of whole loop is nlog(n)
}

int main() {
	map<int, string> m;
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd"; // O(log(n))

	//In maps keys cannot be repeated every key is unique
	//and keys are stored in sorted order

	map<int, int> n;
	n[6];//here for the key = 1 value 0 will be assumed and time complexity is O(log(n))
	printI(n);

	//we can also declare maps using inserting pairs
	m.insert({4, "afg"});
	//in maps we can use iterators same as vectors
	map<int, string> :: iterator it;
	for (it = m.begin(); it != m.end(); ++it) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	//shortcut for iterators
	for (auto &pr : m) {
		cout << pr.first << " " << pr.second << endl;
	}

	auto it2 = m.find(3);//this will return iterator of the key 3
	//and key 3 is not in the map then it will return m.end()
	//time complexity O(log(n))
	if (it2 == m.end()) {
		cout << "NO value" << endl;
	} else {
		cout << it2->first << " " << it2->second << endl;
	}
	if (it2 != m.end()) //this safety check is necesary as we cannot erase a value which is not there in the map
		m.erase(it2);//it can take both key and iterator as input
	//it deletes the given key or given key value pair at the given iterator from the map
	m.clear();//clears everything inside a map
	print(m);

	//In maps keys are added after comparision so the time complexity of comparision is added to the total time complexity
	map<string, string> m2; //here time complexity will also contain the length of the key string
	//O(s.size()*n(log(n)))

	/*
	Q. Given N strings, print unique strings in lexographical order
	   with their frequency.
	*/
	int z;
	cin >> z;
	map<string, int> m3;
	for (int i = 0; i < z; ++i) {
		string s;
		cin >> s;
		m3[s]++;
		//m[s] = m[s] + 1;
	}

	for (auto &pr : m3) {
		cout << pr.first << " " << pr.second << endl;
	}

}