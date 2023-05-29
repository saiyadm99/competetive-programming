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
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int par){
  bool isLoopExists = false;
  vis[vertex] = true;
  for(int child: g[vertex]){
    if(vis[child] && child == par){
      continue;
    }
    if(vis[child]) {
      return true;
    }
    isLoopExists |= dfs(child, vertex);
  }

  return isLoopExists;
}

int main() {
  int n, e;
  cin >> n >> e;

  for(int i=0; i<e; i++){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  bool isLoopExists = false;
  for(int i=1; i<=n; i++){
    if(vis[i]) continue;
    if(dfs(i, 0)){
      isLoopExists = true;
      break; 
    }
  }
  cout << isLoopExists << "\n";

}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/