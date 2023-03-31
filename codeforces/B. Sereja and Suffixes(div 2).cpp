// https://codeforces.com/problemset/problem/368/B
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

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(n+1);
  for(int i=1; i<=n; i++){
    cin >> v[i];
  }

  unordered_map<int, int> mm;

  vector<int> v1(n+2);

  for(int i=n; i>=1; i--){
    if(!mm.count(v[i])){
      v1[i] = 1;
    }
    mm[v[i]] = 1;
  }

  vector<int> v2(n+2);

  for(int i=n;i>=1; i--){
    v2[i] = v1[i] + v2[i+1];
  }

  for(int i=0; i<m; i++){
    int x;
    cin >> x;

    cout << v2[x] << "\n";
  }
}

