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

void sol() {
  int n, q;
  cin >> n >> q;

  vector<long long> v(n+2);
  for(int i=1; i<=n; i++){
    cin >> v[i];
  }

  vector<long long> fs(n+2), bs(n+2);
  for(int i=1; i<=n; i++){
    fs[i] = fs[i-1] + v[i];
  }

  for(int i=n; i>=1; i--){
    bs[i] = bs[i+1] + v[i];
  }

  for(int i=0; i<q; i++){
    long long l, r, k;
    cin >> l >> r >> k;

    long long xx = fs[l-1] + bs[r+1] + (r-l) * k + k;

    if(xx%2 == 1){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }
}

int main() {
  int t; 
  cin >> t;
  while(t--) sol();
}
