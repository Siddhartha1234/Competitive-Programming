			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;
#define prec(n) fixed<<setprecision(n)
 
const ll maxn = 3e6;
int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a[6] , b[6];
  for(int i=0; i < 6; i++) cin >> a[i];
  for(int i=0; i < 6; i++) cin >> b[i];

  double e = 0, g = 0;	
  for(int i=0; i < 6; i ++){
  	for(int j = 0; j <6; j++) {
  		if(a[i] == b[j]) e++;
  		if(a[i] > b[j]) g++;
  	}
  }
  double pt = e/36.0;
  double pf = g/36.0;
  double ans = pf / (1 - pt);  
  cout << prec(5) << ans ;
  return 0;
}

		