			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 3e6;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  map<ll,ll>  cnt;
  ll n,m;
  cin >> n >> m;
  for(int i= 0; i<n; i++) {
  	ll x; cin >> x;
  	cnt[x]++;
  }
  ll ans = 0;
  for(auto & val : cnt) {
  	 for(auto & val1 : cnt) {
  	 	if(val.first != val1.first) {
  	 		ans += val.second*val1.second;
  	 	}
  	 }
  }
  cout << ans/2;
  return 0;
}

		