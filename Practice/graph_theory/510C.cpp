#include <bits/stdc++.h>


using namespace std;

const int maxv = 26;

int color[maxv];
vector<int> g[maxv];
list<int> tslist;

bool isCyclic(int u)
{
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

int main()
{
	int n; cin >> n; 
	string s[n];
	for (int i = 0; i < n; ++i){
		cin >> s[i];
	}
	for(int i = 0; i < n - 1; i++) {
		int l1 = s[i].length();
		int l2 = s[i+1].length();
		int j = 0, k = 0;
		while(j < l1 && k < l2) {
			if(s[i][j] == s[i+1][k]) {
				k++;
				j++;
			}
			else {
				g[s[i][j] - 'a'].push_back(s[i+1][k] - 'a');
				break;
			}
			
		}
		if(k == l2 && j != l1) {
			cout << "Impossible";
			return 0;
		}
	} 
	
	for(int i = 0; i < 26; i++) {
		if(color[i] == 0 && isCyclic(i)) {
			cout << "Impossible";
			return 0;
		}
	}
	for(list<int>::iterator i = tslist.begin(); i != tslist.end(); ++i)
	{
		cout << (char) ('a' + *i);
	}
	return 0;
}