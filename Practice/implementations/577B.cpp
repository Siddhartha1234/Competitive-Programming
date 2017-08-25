			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long) (x).size())
#define len(x) ((long long) (x).length())
#define rep(i,a,b) for(long long i = (a); i <= (b); i++)
#define rrep(i,a,b) for (long long i = (a); i >= b; i--)
#define fill(x, y) memset(x, y, sizeof(x))
#define present(t, x) (t.find(x) != t.end())
#define prec(n) fixed<<setprecision(n)
#define uni(a) (a).erase(unique(all(a)), (a).end())
		
using namespace std;

const ll maxn = 3e6;


int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  ll n, m; cin >> n >> m;	
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
  	 cin>>a[i];
  	 a[i] %= m;
  	 if(a[i] == 0) {
  	 	cout << "YES";
  	 	return 0;
  	 }
  }
  set<ll> check;
  check.insert(0ll);
  for(ll el : a) {
  	if(present(check,m-el)) {
  		cout<<"YES";
  		return 0;
  	}
  	vector<ll> topush;
  	for(ll sel : check) {
  		topush.push_back((sel + el)%m);
  	}
  	for(ll pel : topush) {
  		check.insert(pel);
  	}
  }
  cout << "NO";
  return 0;
}

		