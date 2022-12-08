#include<bits/stdc++.h>
using namespace std;
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

void solve()
{
	int n, x=0,y=0;
	cin >> n;

	string s;
	cin >> s;
	
	for (int i = 0; i < n; i++)
	{
		for(int j = i;j < n; j++)
		{
			for(int k=i; k<=j; j++)
			{
				if(s[k] == '0')
					x++;
				else
					y++;
			}
			if(x == 0)
				cout << pow(y,2) << endl;
			else if(y == 0)
				cout << pow(x,2) << endl;
			else
		}
	}

	if(x>=y)
	{
		cout << round(pow(x, 2)) << endl;
		return;
	}
	else
	{
		cout << round(pow(y, 2)) << endl;
		return;
	}
}
int main()
{
	setIO();

	w(t) {
		solve();
	}
	return 0;
}