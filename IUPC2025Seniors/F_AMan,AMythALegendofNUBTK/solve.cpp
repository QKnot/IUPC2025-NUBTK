#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#endif
 
int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	int n;  cin >> n;
 
    vector<vector<int>> adj(n);
	for (int u = 1; u < n; ++u) {
		int v;
		cin >> v;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
 
	vector<int> ans(n);
	auto dfs = [&](this auto&& self, int u, int p)-> void {
		for (auto& v: adj[u]) {
			if (v != p) {
				self(v, u);
				ans[u] += ans[v]+1;
			}
		}
	};
    dfs(0, -1);

	for (int i = 0; i < n; ++i) {
		cout << ans[i] << " \n"[i == n-1];
	}
 
	return 0;
}