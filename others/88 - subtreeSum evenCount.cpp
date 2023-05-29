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
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex, int par = 0){
  subtree_sum[vertex] = subtree_sum[vertex] + vertex;
  if(vertex%2 == 0) even_ct[vertex]++;

  for(int child : g[vertex]){
    if(child == par) continue;
    dfs(child, vertex);
    subtree_sum[vertex] = subtree_sum[vertex] + subtree_sum[child];
    even_ct[vertex] = even_ct[vertex] + even_ct[child];
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
  int q;
  cin >> q;
  // while(q--){
  //   int v;
  //   cin >> v;
  //   cout << subtree_sum[v] << " " << even_ct[v] << "\n";
  // }
  for(int i=1; i<=n; i++){
    cout << subtree_sum[i] << " " << even_ct[i] << "\n";
  }
}

/*
// Input

// Output

*/