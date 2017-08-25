			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 3e6;
int a[maxn];

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  int n; cin >> n;
  
  for(int i = 1; i <= n; i++) 
  	cin >> a[i];

  sort(a+1, a+1+n);

  int ind = 1 , cnt = 0;
  while(ind <= n) {
  	if(ind < n && a[ind] == a[ind+1]) {
  		ind += 2;
  		cnt++;
  		while(ind <= n && a[ind] == a[ind-1] + 1) {
  			ind++;
  		}
  	}
  	else {
  		cnt++;
  		ind++;
  	}
  }
  cout << cnt << "\n";
  return 0;
}

		