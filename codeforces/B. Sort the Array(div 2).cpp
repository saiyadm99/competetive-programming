//https://codeforces.com/contest/451/problem/B
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
  int n, k;
  cin >> n >> k;
  vector<int> v(n+1);

  for(int i=1; i<=n; i++){
    cin >> v[i];
  }

  for(int i=1; i<=n; i++){
    v[i] = v[i] + v[i-1];
  }

  int indx;
  int sum = 1e9;

  for(int i=k; i<=n; i++){
    int x = v[i] - v[i-k];
    if(x<sum){
      sum = x;
      indx = i-k;
    }
  }
  cout << indx+1<< "\n";
}

