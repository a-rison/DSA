#include<bits/stdc++.h>
using namespace std;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define no cout << "no" << endl
#define ll long long int
#define ld long double
#define mp make_pair
#define loop(a, b, i) for (ll i = a; i < b; i++)
#define loop1(a, b, i) for (ll i = a; i > b; i--)
#define For(i, n) loop(0, n, i)
#define Fori(i, n) loop1(n, -1, i)
#define w(t)  \
    ll t;     \
    cin >> t; \
    while (t--)
#define mod 1000000007
#define cbn cout << endl;
#define len(a) a.size()
#define pb push_back
#define vi vector<int>
#define vit vector<int>::iterator
#define viit vector<ll>::iterator
#define pii pair<int, int>
#define pll pair<ll, ll>
#define PI 3.1415926535897932384626
#define vll vector<ll>
#define vvll vector<vll>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);
void setIO()
{
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void solve() {
	string str1, str2;
	cin >> str1;
	cin >> str2;

	map<char,int> m;
	for(unsigned int i=0;i<str1.length();i++)
	{
		m[str1[i]]++;
	}
	for(unsigned int i=0;i<str2.length();i++)
	{
		m[str2[i]]++;
	}
	for(auto &pr: m)
	{
		if(pr.second % 2 != 0)
		{
			cout << "sad" << endl;
			return;
		}
	}
	cout << "happy" << endl;
}
int main()
{
	setIO();

	w(t) {
		solve();
	}
	return 0;
}