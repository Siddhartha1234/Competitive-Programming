#include <bits/stdc++.h>


using namespace std;

const int maxv = 2e6;

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





