			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

bool match(string & s, string & t) {
	   if(s == t)
	    return true;
	   
	   int ls = s.length() , lt = t.length();
	   
	   if(ls != lt  || ls &1 || lt&1) 
	   	return false;
	   
	   string sl  = s.substr(0,ls/2) , sr = s.subtr(ls/2);
	   string tl =  t.substr(0,lt/2) , tr = t.subtr(lt/2);

	   return match(sl,tr) && match(sr,tl);   
}

const ll maxn = 3e6;

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  string s, t;
  cin >> s >> t;
  if(match(s, t, 0, s.length() - 1, 0, t.length() - 1)) cout << "YES";
  else cout << "NO";	
  return 0;
}

		