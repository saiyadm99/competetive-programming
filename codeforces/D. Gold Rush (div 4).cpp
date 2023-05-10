// https://codeforces.com/contest/1829/problem/D

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

int m;
unordered_map<int, bool> cache;

bool func(int n){
  if(n%3 != 0){
    return false;
  }

  int xx = (n/3) * 2;

  if(xx == m || n/3 == m){
    return true;
  }

  if (cache.find(n) != cache.end()) {
    return cache[n];
  }
  return cache[n] = func(xx) | func (n/3);
}

void sol() {
  int n, mm;
  cin >> n >> mm;
  m = mm;
  cache.clear();
  if(m>n){
    cout << "NO\n";
    return;
  }

  if(m == n){
    cout << "YES\n";
    return;
  }

  bool bb = func(n);

  cout << (bb ? "YES" : "NO") << "\n";
}
  
int main() {
  int t;
  cin >> t;
  while(t--) sol();
}
