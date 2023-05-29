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

void dfs(int vertex){
  cout << vertex << endl;
  vis[vertex] = true;
  for(int child: g[vertex]){
    cout << " " << vertex << " --> " << child << endl;
    if(vis[child]) {
      continue;
    }
    dfs(child);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  for(int i=0; i<m; i++){
    int v1, v2;
    cin >> v1 >> v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  dfs(6 );
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/