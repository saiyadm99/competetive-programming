//https://codeforces.com/contest/1810/problem/B
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
  long long n;
  cin >> n;
  if(n%2 == 0){
    cout << -1 << "\n";
    return;
  }

  vector<int> v;

  while(n != 1){
    int x = (n-1)/2;
    if(x%2 != 0){
      n = (n-1)/2;
      v.push_back(2);
    }else{
      n = (n+1)/2;
      v.push_back(1);
    }
  }

  int size = v.size();

  if(size>40){
    cout << -1 << "\n";
  }

  cout << size << "\n";
  for(int i=size-1; i>=0; i--){
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) sol();
}
 
