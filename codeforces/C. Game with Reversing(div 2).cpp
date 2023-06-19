//https://codeforces.com/contest/1834/problem/C
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
const int N = 2 * 1e5 + 10;
const int INF = 1000000;
void sol(){
  int n;
  string s, t;
  cin >> n >> s >> t;

  int a = 0, b = 0;

  for(int i=0; i<n; i++){
    if(s[i] != t[i]) a++;
    if(s[i] != t[n-i-1]) b++;
  }

  int ans = INF;

  ans = min(ans, a/2 * 4 + a%2);
  b = max(b, 1);
  ans = min(ans, b*2 - (b%2 ^ 1));
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) sol();
}
