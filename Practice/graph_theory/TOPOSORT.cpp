			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 3e6;

const int maxv = 2e5;

int color[maxv];
vector<int> g[maxv];
list<int> tslist;

bool isCyclic(int u) {
	color[u] = 1;
	bool cycle = false;
	for(auto & v : g[u]) {
		if(color[v] == 1) cycle = true;
		if(color[v] == 0) {
			cycle |= isCyclic(v);
		}
	}
	color[u] = 2;
	tslist.push_front(u);
	return cycle;
}
		
int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  int n, m; 
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
  	 int u, v; cin >> u >> v;
  	 g[u].push_back(v);	 			
  }
  for (int i = 1; i <= n; i++) {
  	 sort(g[i].begin(), g[i].end());
  }
  int pos = 1;
  for(int i = n; i >= 1; i--) {
  	 if(color[i] == 0 && isCyclic(i))
  	 	pos = 0;  
  }
  if(pos && tslist.size() == n) {
  	 for(auto & el : tslist)
  	 	cout << el << " ";
  }
  else {
  	cout << "Sandro fails.";
  }	 		
  return 0;
}

		