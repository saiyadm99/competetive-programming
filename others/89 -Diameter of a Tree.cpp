/* 
Given Q queries, Q<=10^5 
In ieach query given V,
Print subtree sum of V, Number of even numbers in subtree of V
*/

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
int depth[N];

void dfs(int vertex, int par=-1){

  for(int child : g[vertex]){
    if(child == par) continue;
    depth[child] = depth[vertex] + 1;
    dfs(child, vertex);
  }
}

int main(){
  int n;
  cin >> n;
  for(int i=1; i<n; i++){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  dfs(1);
  int max_depth = 0;
  int max_depth_index;
  for(int i=1; i<=n; i++){
    if(depth[i] > max_depth){
      max_depth = depth[i];
      max_depth_index = i;
    }
    depth[i] = 0;
  }

  dfs(max_depth_index);
  max_depth = 0;
  for(int i=1; i<=n; i++){
    if(depth[i] > max_depth){
      max_depth = depth[i];
    }
  }

  cout << max_depth;

}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/