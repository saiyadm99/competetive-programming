//https://codeforces.com/contest/1818/problem/C
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
const int N = 510;
const int INF = 1e9 + 10;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> v(n+1);
  for(int i=1; i<=n; i++){
    cin >> v[i];
  }

  vector<int> pSum(n+1, 0);
  pSum[1] = pSum[2] = 1;

  for(int i=3; i<=n; i++){
    if(v[i-2] >= v[i-1] && v[i-1] >= v[i]){
      pSum[i] = 0;
    }else{
      pSum[i] = 1;
    }
  }

  for(int i=1; i<=n; i++){
    pSum[i] = pSum[i] + pSum[i-1]; 
  }

  while(q--){
    int l, r;
    cin >> l >> r;
    if(l == r){
      cout << "1\n";
      continue;
    }
    int ans = pSum[r] - pSum[l-1];
    if(pSum[l-1] == pSum[l]) ans++;
    if(pSum[l] == pSum[l+1]) ans++;
    cout << ans << "\n";
  }
}

