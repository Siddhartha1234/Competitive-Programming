			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";
const ll inf = 1e9;
const ll linf = 1e18; 
const double eps = 1e-9;
const double pi = acos(-1.0);
const ll  MOD =  1e9+7;
inline ll mod(ll a,ll b=MOD) { return (a%b+b)%b; }
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll xdiv(ll a,ll b){ if(a%b == 0) return a/b; else return a/b + 1;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
inline ll inv(ll a, ll m = MOD) { return fpow(a,m-2,m);}
		
using namespace std;

const ll maxn = 3e6;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  ll n , k; cin >> n >> k;
  ll mx = -1;
  ll lim = 2*n;
  lim /= k;
  lim /= (k+1);
  if(lim == 0) {
  	cout << -1;
  	return 0;
  }
  for(ll d = 1; d*d <= n; d++) {	
	if(n % d == 0) {
		if(d <= lim)
			mx = max(mx, d);
		if(n/d <= lim) 
			mx = max(mx, n/d);
	}
  } 
  if(mx == -1) {
  	cout << -1;
  	return 0;
  }	

  for(int i = 1; i  < k; i++) {
  	cout << mx * i << ' '; 
  }
  cout << n - mx*k*(k-1)/2; 
  return 0;
}

		