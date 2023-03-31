//https://codeforces.com/problemset/problem/313/B
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
  string s;
  cin >> s;
  int size = s.size();
  vector<int> v1(size+1);
  for(int i=1; i<size; i++){
    if(s[i] == s[i-1]){
      v1[i] = 1;
    }else{
      v1[i] = 0;
    }
  }

  vector<int> v2(size+1);
  for(int i=1; i<size; i++){
    v2[i] = v1[i] + v2[i-1];
  }

  int m;
  cin >> m;
  for(int i=0; i<m; i++){
    int l, r;
    cin >> l >> r;
    cout << v2[r-1] - v2[l-1] << "\n";
  }
}

