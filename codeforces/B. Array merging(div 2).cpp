//https://codeforces.com/contest/1831/problem/B
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
const int M = 1e9 + 7;

void sol(){
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  unordered_map<int, int> am;
  unordered_map<int, int> bm;

  int temp = 0;

  for(int i=0; i<n; i++){
    temp++;
    if(i == n-1 || a[i] != a[i+1]){
      if(am.count(a[i]) == 0){
        am[a[i]] = temp;
      }else{
        am[a[i]] = max(temp, am[a[i]]);
      }
      temp = 0;
    }
  }

  for(int i=0; i<n; i++){
    temp++;
    if(i == n-1 || b[i] != b[i+1]){
      if(bm.count(b[i]) == 0){
        bm[b[i]] = temp;
      }else{
        bm[b[i]] = max(temp, bm[b[i]]);
      }
      temp = 0;
    }
  }

  int ans = 0;
  for(auto it : am){
    int xx = it.second + bm[it.first];
    ans = max(xx, ans); 
  }
  for(auto it : bm){
    int xx = it.second + am[it.first];
    ans = max(xx, ans); 
  }
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) sol();
}
