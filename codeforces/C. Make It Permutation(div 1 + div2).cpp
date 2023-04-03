//https://codeforces.com/contest/1810/problem/C
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
#include <string>
using namespace std;

void sol(){
  long long n, c, d;
  cin >> n >> c >> d;

  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }  

  sort(v.begin(), v.end());
  long long cost = 0;

  v.erase(unique(v.begin(), v.end()), v.end());
  cost = c*(n-v.size());
  n = v.size();

  if(v[0] != 1){
    v.push_back(1);
    cost = cost + d;
    sort(v.begin(), v.end());
    n++;
  }

  long long temp = 1e18;

  for(int i=1; i<=n; i++){
    long long x = v[i-1] - i;
    long long y = n - i;
    long long tt = (y*c) + (x*d);
    // cout << x << " " << y << " " << tt <<"\n" ;
    temp = min(temp, tt);
  }
  cout << cost + temp << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) sol();
}

