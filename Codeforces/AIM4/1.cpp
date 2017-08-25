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
  string s; cin >> s;
  int k; cin >> k;
  vector<int> cnt(26,0);
  for(int i=0; i<s.length(); i++) {
  	cnt[s[i]-'a']++;
  }
  ll b = 0;
  for(int i=0; i < 26;i++) 
  {
  	if(cnt[i]) b++;
  }
  ll rem = k - b;
  if(rem <= 0) {
  	cout << 0;
  	return 0;
  }
  ll can = 0;
  for(int i=0; i < 26; i++) {
  	if(cnt[i])can += (cnt[i] - 1);
  }
  can = min(26-b,can);
  if(can >= rem) {
  	cout << k - b; 
  }
  else {
  	cout <<"impossible";
  }	
  return 0;
}

		