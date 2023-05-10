// https://codeforces.com/contest/1829/problem/C
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

int INF = 1e9;

void sol() {
  int n;
  cin >> n;
  vector<pair<int, string>> v;
  for(int i=0; i<n; i++){
    int tt;
    string ss;
    cin >> tt >> ss;
    v.push_back(make_pair(tt, ss));
  }

  int skill1 = INF;
  int skill2 = INF;
  int both = INF;

  for (auto p : v) {
    if(p.second == "01"){
      if(p.first < skill1){
        skill1 = p.first;
      }
    }
    if(p.second == "10"){
      if(p.first < skill2){
        skill2 = p.first;
      }
    }
    if(p.second == "11"){
      if(p.first < both){
        both = p.first;
      }
    }
  }

  int final = min(both, skill1+skill2);

  cout << (final >= INF ? -1 : final) << "\n";

}

int main() {
  int t;
  cin >> t;
  while(t--) sol();
}
