
// #include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
using namespace std;
void print_v(vector<int>&v);
int M = 1e9+7;  

void sol(){
  int n, s;
    cin >> n >> s;
    
    int l = s, r = s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        l = min(l, x);
        r = max(r, x);
    }

    cout << l << " " << r <<"\n";
    
    int ans = min(s - l, r - s) + r - l;
    cout << ans << "\n";
}


signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) sol();
  // sol();
  return 0;
}

void print_v(vector<int>&v){
  for(int i:v) cout<< i<<" "; cout<<"\n";
}

