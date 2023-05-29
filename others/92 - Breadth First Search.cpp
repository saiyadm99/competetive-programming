/* 
Given Q queries, Q<=10^5 
In ieach query given V,
Print subtree sum of V, Number of even numbers in subtree of V
*/

//#include <bits/stdc++.h>
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
const int M = 1e9 + 10;

const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source){
  queue<int> q;
  q.push(source);
  vis[source] = 1;
  while(!q.empty()){
    int cur_v = q.front();
    q.pop();
    //cout << cur_v<< " ";
    for(int child: g[cur_v]){
      if(!vis[child]){
        q.push(child);
        vis[child] = 1;
        level[child] = level[cur_v] + 1;
      }
    }
  }
  cout << endl;
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
  bfs(1);

  for(int i=1; i<=n; i++){
    cout << i << ": " << level[i] << endl;
  }
}



//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/