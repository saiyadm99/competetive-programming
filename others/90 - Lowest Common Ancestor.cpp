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
int par[N]; 

void dfs(int v, int p = -1){
  par[v] = p; 
  for(int child: g[v]){
    if(child == p) continue;
    dfs(child, v);
  }
}

vector<int> path(int v){
  vector<int> ans;

  while(v != -1){
    ans.push_back(v);
    v = par[v];
  }
  reverse(ans.begin(), ans.end());
  return ans;
  
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

  int x, y;
  cin >> x >> y;
  vector<int> path_x = path(x);
  vector<int> path_y = path(y);

  int carlPrit = -2;

  for(int i=0; i<path_y.size(); i++){
    if(path_x[i] == path_y[i]){
      carlPrit = path_x[i];
    }
  }

  cout << carlPrit << endl;
}


//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/