// #include <bits/stdc++.h>
//https://leetcode.com/problems/network-delay-time/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
  const int N = 1e3 + 10;
  const int INF = 1e9 + 10;

  int dijkstra(int source, int n, vector<pair<int, int>> g[]) {
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);

    set<pair<int, int>> st;

    st.insert({0, source});
    dist[source] = 0;

    while (!st.empty()) {
      auto node = *st.begin();
      int v = node.second;
      int v_dist = node.first;
      st.erase(st.begin());
      if (vis[v]) continue;
      vis[v] = 1;
      for (auto child : g[v]) {
        int child_v = child.first;
        int wt = child.second;

        if (dist[v] + wt < dist[child_v]) {
          dist[child_v] = dist[v] + wt;
          st.insert({dist[child_v], child_v});
        }
      }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
      if (dist[i] == INF) return -1;
      ans = max(ans, dist[i]);
    }
    return ans;
  }

  int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int, int>> g[N];
    for (auto vec : times) {
      g[vec[0]].push_back({vec[1], vec[2]});
    }

    return dijkstra(k, n, g);
  }
};

int main() {
  int n, k, t;
  cin >> n >> k >> t;
  vector<vector<int>> times;

  while (t--) {
    int u, v, w;
    cin >> u >> v >> w;
    times.push_back({u, v, w});
  }

  Solution sol;
  int result = sol.networkDelayTime(times, n, k);
  cout << "Result: " << result << endl;

  return 0;
}


//int *ptr = lower_bound(a, a+n, 5);
/*
// Input
4 2 5
2 1 1
2 3 2
1 3 3
3 4 4
4 2 5


// Output
6
*/