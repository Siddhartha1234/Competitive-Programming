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
  int ind = 0;
  vector<string> a , b;
  while(ind < s.length()) {
  	string temp;
  	while(ind < s.length() && s[ind] != ',' && s[ind] != ';') {
  		temp += s[ind];
  		ind++;
  	}
  	if(temp.length()) {
  		int num =1;
  		if(temp.length() > 1 && temp[0] == '0') {
  			num = 0;
  		}
  		for(int j = 0; j < temp.length(); j++) {
  			if(!isdigit(temp[j])) {
  				num = 0;
  				break;
  			}
  		}
  		if(num) {
  			a.push_back(temp);
  		}
  		else {
  			b.push_back(temp);
  		} 
  	}
  	else b.push_back(temp);
  	ind++;
  }
  string nil;
  if(s[s.length()-1] == ',' || s[s.length()-1] == ';')
  	b.push_back(nil);

  if(a.size()) {
  	cout << "\""<< a[0] ;
  	for(int i= 1; i < a.size() - 1; i++)
  		cout << ',' <<a[i];
  	if(a.size() > 1) {
  		cout << ',' <<a[a.size()-1];
  	}
  	cout << "\"\n";  
  }
  else cout << "-\n"; 
  
  if(b.size()) {
  	cout << "\"" << b[0] ;
  	for(int i= 1; i < b.size() - 1; i++)
  		cout << ',' <<b[i];
  	if(b.size() > 1) {
  		cout << ',' <<b[b.size()-1];
  	}
  	cout << "\"\n";  
  }
  else cout << "-\n";
  return 0;
}

		