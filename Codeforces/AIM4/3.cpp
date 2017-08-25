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
  ll n; cin >> n;
  vector<pair<ll,ll>> a(n);
  for(int i= 0; i < n; i++) {
  	cin >> a[i].first;
  	a[i].second = i;
  }
  sort(all(a));
  int pos = 1;
  vector<vector<ll>> cnt(n+4);
  ll c = 0;
  vector<int> visited(n,0);
  for(int i = 0; i < n; i++) {
  	 ll curr = i;
  	 if(!visited[curr]){
	  	 while(curr != a[curr].second) {
  	 		cnt[c].push_back(curr+1);
  	 		visited[curr] = 1;
  	 		curr = a[curr].second; 
	  	 }
	  	 cnt[c].push_back(a[curr].second+1);
	  	 visited[a[curr].second+1] = 1;
	  	 c++;
  	  }	

  }
  	cout << c << "\n";
  	for(int i = 0; i < c; i++) {
	  		cout << cnt[i].size() << " ";
	  		for(auto & el : cnt[i]) {
	  			cout << el << " ";
	  		}
	  		cout << "\n";
  		}
  return 0;
}

		