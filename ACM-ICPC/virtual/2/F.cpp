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
  char s[9];
  for(int i=0; i < 9; i++) cin>>s[i];
  int a = s[0] - '0';
  int b = s[4] - '0';
  int c = s[8] - '0';
  if(a + b == c) cout << "YES";
  else cout << "NO";	
  return 0;
}

		