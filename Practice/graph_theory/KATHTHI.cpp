#include <bits/stdc++.h>

using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
 	cin.tie(0);
    cout.tie(0); 
	int t; cin >> t;
	while(t--) {
		int r,c,mp[1003][1003],dist[1003][1003];
		cin >> r >> c;
		for(int i = 0; i < r; i++) {
			string s; cin >> s;
			for (int j = 0; j < c; j++)
			{
				mp[i][j] = s[j];
				dist[i][j] = INT_MAX;
			}
		}
		deque<pair<int, int> > q;
		dist[0][0] = 0;
		q.push_front({0,0});
		while(!q.empty())
		{
			pair<int,int> tp = q.front();
			q.pop_front();
			int dirx[] = { 1, 0, -1, 0};
			int diry[] = { 0, 1, 0, -1};
			for(int dir = 0; dir < 4; dir++) {
				int fi = tp.first , se = tp.second;
				if(fi+dirx[dir] < 0 || fi + dirx[dir] >= r || se + diry[dir] < 0 || se + diry[dir] >= c) continue;
				if(dist[fi + dirx[dir]][se + diry[dir]] > dist[fi][se] + (mp[fi][se] != mp[fi + dirx[dir]][se + diry[dir]]))
				{
					dist[fi + dirx[dir]][se + diry[dir]] = dist[fi][se] + (mp[fi][se] != mp[fi + dirx[dir]][se + diry[dir]]);
					if(mp[fi][se] == mp[fi + dirx[dir]][se + diry[dir]]) 
						q.push_front({fi + dirx[dir], se + diry[dir]});
					else 	
						q.push_back({fi + dirx[dir], se + diry[dir]});	
				}
			}
		}
		cout << dist[r-1][c-1] << "\n";

	}

	return 0;
}