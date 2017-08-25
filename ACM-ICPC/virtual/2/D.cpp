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
  int l[3][2], b[3][2];
  for(int i=0; i <3; i++)  cin>>l[i][0] >> b[i][0];
  for(int i=0 ; i <3; i++) b[i][1] = l[i][0] , l[i][1] = b[i][0];
  vector<int> per = {0,1,2};
  for(int curr = 0; curr < 8; curr++) {
  	pair<ll,ll> lb[3];
  	for(int i=0; i <3; i++) {
  		lb[i].first =l[i][(curr & (1<<i)) != 0];
  		lb[i].second =b[i][(curr & (1<<i)) != 0];  
  	}
	  sort(lb,lb+3);
	  if(lb[0].first == lb[1].first && lb[1].first == lb[2].first && lb[0].second + lb[1].second + lb[2].second == lb[0].first) {
	  	cout << "YES";
	  	return 0;
	  }
	  if(lb[0].first + lb[1].first == lb[2].first && lb[0].second == lb[1].second && lb[2].first == lb[2].second + lb[1].second) {
	  	cout << "YES";
	  	return 0;
	  }
	}
	cout << "NO";
  return 0;
}

		