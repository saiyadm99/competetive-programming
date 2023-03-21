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
  int n, c;
  cin >> n >> c;
  vector<int> v(n);
  vector<int> v1(n);
  vector<int> v2(n);

  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  for(int i=0; i<n; i++){
    v1[i] = v[i] + i+1;
  }

  sort(v1.begin(), v1.end());
  int ans = 0;
  for(int i=0; i<n; i++){
    if(v1[i]<=c){
      ans++;
      c = c - v1[i];
    }
    // cout << v1[i] <<" ";
  }
  cout << ans <<"\n";
}

int main(){
  int t;
  cin >> t;
  while(t--) sol();
}
