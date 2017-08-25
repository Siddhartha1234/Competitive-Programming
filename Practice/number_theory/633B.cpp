			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

ll T;
const ll maxn = 2e5;

int zeros(int n) {
	int p = 5, s = 0;
	while((n/p) != 0) {
		s += floor(n/p);
		p *= 5;
	}
	return s;
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  //cin>>T;
  //while(T--){}
  int k; cin >> k;
  int lo = 1;
  int hi = 5e6;
  while(lo < hi) {
  	int mid = (lo + hi)/2;
  	if(zeros(mid) >= k) hi = mid;
  	else lo = mid + 1;
  }
  if(zeros(lo) == k) {
  	cout << 5 << "\n";
  	for (int i = 0; i < 5; i++) {
  		cout << lo+i << " ";
  	}
  }
  else cout << 0 << "\n";
  return 0;
}

		