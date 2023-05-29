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

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex){
  vis[vertex] = true;
  current_cc.push_back(vertex);
  for(int child: g[vertex]){
    if(vis[child]) {
      continue;
    }
    dfs(child);
  }
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

  int ct = 0;
  for(int i=1; i<=n; i++){
    if(vis[i]){
      continue;
    }else{
      current_cc.clear();
      dfs(i);
      cc.push_back(current_cc);
      ct++;
    }
  }
  cout << cc.size() << "\n";

  for(auto current_cc : cc){
    for(auto c_cc : current_cc){
      cout << c_cc << " ";
    }
    cout << "\n";
  }
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/