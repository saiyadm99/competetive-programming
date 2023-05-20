//https://codeforces.com/contest/1829/problem/E
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

const int N = 1000 + 10;
const int M = 1000 + 10;
int ct;

vector<vector<int>> v(N, vector<int>(M));
vector<vector<int>> vis(N, vector<int>(M));

bool isValid(int n, int m, int i, int j){
  return i>=0 && j>=0 && i<n && j<m;
}

void dfs(int n, int m, int i, int j){
  if(!isValid(n, m, i, j)) return;
  if(vis[i][j]) return;
  if(v[i][j] == 0) return;

  ct = ct + v[i][j];
  vis[i][j] = 1;
  
  dfs(n, m, i-1, j);
  dfs(n, m, i, j+1);
  dfs(n, m, i, j-1);
  dfs(n, m, i+1, j);
}

void sol(){
  int n, m;
  cin >> n >> m;
  ct = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> v[i][j];
      vis[i][j] = 0;
    }
  }

  int ans = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      dfs(n, m, i, j);
      ans = max(ans, ct);
      ct = 0;
    }
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--) sol();
}
