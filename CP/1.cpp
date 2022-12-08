#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define arr(a,n) rep(i,0,n) cin>>a[i]
#define int long long
#define ld long double
#define mp make_pair
#define w(t)  \
	int t;		\
    //ll t;     \
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
	int n;
	string s;
	cin >> n >> s;

	int cnt0 = 0, cnt1 = 0;
	rep(i,0,n)
	{
		cnt0 += s[i] == '0';
		cnt1 += s[i] == '1';
	}
	int ans = cnt1 * cnt0;
	int lg = 1;
	rep(i,1,n)
	{
		if(s[i] == s[i-1])
			lg++;
		else
		{
			ans = max(ans, lg * lg);
			lg = 1;
		}
	}
	ans = max(ans, lg * lg);
	cout << ans << "\n";
}
int main()
{
	setIO();

	w(t) {
		solve();
	}
	return 0;
}