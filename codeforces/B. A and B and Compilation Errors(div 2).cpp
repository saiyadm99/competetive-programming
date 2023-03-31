//https://codeforces.com/problemset/problem/519/B
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
  int n;
  cin >> n;

  unordered_map<int, int> m;

  for(int i=0; i<n; i++){
    int x; 
    cin >> x;
    m[x]++;
  }
  
  unordered_map<int, int> m1;
  for(int i=0; i<n-1; i++){
    int x;
    cin >> x;
    m1[x]++;
  }

  int a = -1;

  for(auto it: m){
    if(!m1.count(it.first)){
      a = it.first;
    }else if(it.second > m1[it.first]){
      a = it.first;
    }
  }
  
  unordered_map<int, int> m2;
  for(int i=0; i<n-2; i++){
    int x;
    cin >> x;
    m2[x]++;
  }

  int b = -1;

  for(auto it: m){
    // cout << it.first << " " << it.second<<" "<<m2[it.first]<<"\n";
    if(!m2.count(it.first)){
      if(it.first != a){
        b = it.first;
      }
    }else if(it.second > m2[it.first]){
      if(it.first == a){
        if(it.second > m2[it.first]+1){
          b = it.first;
        }
      }else{
        b = it.first;
      }
    }
  }

  cout << a << "\n" << b << "\n";
}

