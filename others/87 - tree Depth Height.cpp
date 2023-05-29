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
int depth[N], height[N];

void dfs(int vertex, int par=0){
  for(int child : g[vertex]){
    if(child == par) continue;
    depth[child] = depth[vertex] + 1;
    dfs(child, vertex);
    height[vertex] = max(height[vertex], height[child] + 1);
  }
}

int main(){
  int n;
  cin >> n;
  for(int i=0; i<n-1; i++){
    int x, y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  
  dfs(1);
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/