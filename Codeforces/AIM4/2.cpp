			/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

#define ll long long
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

using namespace std;

const ll maxn = 60;
int visited[maxn][maxn];
int g[maxn][maxn];
int n,m; 

void dfsr(int x, int y, ll &c, int col) {
	c += 1;
	visited[x][y] = 1;
	for(int i = 0; i < n; i++){
		if(!visited[i][y] && g[i][y] == col) {
			c += 1;
			visited[i][y] = 1;
		}
	}
}
void dfsd(int x, int y, ll &c, int col) {
	c += 1;
	visited[x][y] = 1;
	for(int i = 0; i < m; i++){
		if(!visited[x][i] && g[x][i] == col) {
			c += 1;
			visited[x][i] = 1;
		}
	}
}

int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  cin >> n >> m;
  for(int i=0; i < n; i++) {
  	for(int j = 0; j < m; j++) {
  		cin>>g[i][j];
  	}
  }
  ll ans = 0;
  for(int i=0; i <n; i++){
  	ll nw = 0, nb = 0;
  	for(int j=0; j <m; j++){
  		if(g[i][j] == 0) nw++;
  		else nb++;
  	}
  	ans += (1ll << nw) - 1;
  	ans += (1ll << nb) - 1;
  }
   
  for(int j=0; j <m; j++){
  	ll nw = 0, nb = 0;
  	for(int i=0; i <n; i++){
  		if(g[i][j] == 0) nw++;
  		else nb++;
  	}
  	ans += (1ll << nw) - 1;
  	ans += (1ll << nb) - 1;
  }
  ans -= (m*n);

  cout << ans << "\n";
  return 0;
}

		