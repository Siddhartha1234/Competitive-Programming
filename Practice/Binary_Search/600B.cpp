			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>
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
		
#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 3e6;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,m; cin >> n >> m; 
  vector<int> a(n),b(m);
  for(int i = 0; i < n; i++)
  	cin >> a[i];
  for(int i = 0; i < m; i++) 	
  	cin >> b[i];

  sort(all(a));

  for(int i = 0; i < m; i++) {
  	ll ind = upper_bound(all(a),b[i]) - a.begin();
  	cout << ind << " ";
  }
  return 0;
}

		