//https://codeforces.com/contest/1805/problem/C// #include <bits/stdc++.h>
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

void sol() {
  int n, m;
  cin >> n >> m;

  vector<long long > v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  for(int i=0; i<m; i++){
    long long a, b, c;
    cin >> a >> b >> c;

    int p = lower_bound(v.begin(), v.end(), b) - v.begin();
    vector<long long> vv;

    if(p<n){
      vv.push_back(v[p]);
    }
    if(p>0){
      vv.push_back(v[p-1]);
    }

    bool ok = false;
    for(auto it : vv){
      long long xx = (b-it) * (b-it) - 4 * a * c;
      if(xx<0){
        cout << "YES\n" << it <<"\n";
        ok = true;
        break;
      }
    }
    if(!ok){
      cout << "NO\n";
    }
  }
  cout << "\n";  
}

int main() {
  int t;
  cin >> t;
  while(t--) sol();
}
