//https://codeforces.com/problemset/problem/20/C
// #include <bits/stdc++.h>
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
const long long INF = 1e15;
const int N = 1e5 + 10;

vector<pair<int, int>> g[N];
vector<int> vis(N, 0);
vector<long long> dist(N, INF);

void dijkstra(int n){
  set<pair<int, int>> st;
  vector<int> path(n+1);

  st.insert({0, 1});
  dist[1] = 0;
  
  while(!st.empty()){
    auto node = *st.begin();
    int v = node.second;
    int v_dist = node.first;
    st.erase(st.begin());
    if(vis[v]) continue;
    vis[v] = 1;

    for(auto child : g[v]){
      int child_v = child.first;
      int wt = child.second;

      if(dist[v] + wt < dist[child_v]){
        path[child_v] = v;
        dist[child_v] = dist[v] + wt;
        st.insert({dist[child_v], child_v});
      }
    }
  }

  if(dist[n] == INF){
    cout << -1 <<"\n";
    return;
  }

  int xx = n;
  vector<int> ans;
  while(xx > 0){
    ans.push_back(xx);
    xx = path[xx];
  }
  reverse(ans.begin(), ans.end());
  for(auto it : ans){
    cout << it << " ";
  }
  cout << "\n";
}

void sol() {
  int n, m;
  cin >> n >> m;

  for(int i=1; i<=n; i++){
    g[i].clear();
  }
  
  for(int i=0; i<m; i++){
    int a, b, w;
    cin >> a >> b >> w;
    g[a].push_back({b, w});
    g[b].push_back({a, w});
  }

  dijkstra(n);
}

int main() {
  sol();
}
