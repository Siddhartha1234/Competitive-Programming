			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 3e4;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  string s; cin >> s;
  char cc[maxn];
  ll m; cin >> m;
  for (int i = 0; i < m; i++) {
  	ll l , r, len, k;
  	cin >> l >> r >> k;
  	len = r - l + 1;
  	r-- ,l--;
  	k %= len;
  	for(int ind = l ; ind <= r; ind++) {
  		if(ind + k > r) {
  			cc[l - 1 + ind + k - r] = s[ind];
  		}
  		else {
  			cc[ind + k] = s[ind];
  		}
  	}
  	for(int ind = l ; ind <= r; ind++){
  		s[ind] = cc[ind];
  	}  		
  }
  cout << s << "\n";  	
  return 0;
}

		