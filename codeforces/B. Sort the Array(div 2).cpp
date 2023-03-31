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

  vector<int> v(n);

  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  int x = 0;

  while(x+1 <n && (v[x] < v[x+1])){
    x++;
  }
  int l = x;
  while(x+1 <n && (v[x] > v[x+1])){
    x++;
  }
  int r = x;

  while(x+1 <n && (v[x] < v[x+1])){
    x++;
  }

  if(x != n-1){
    cout << "no\n";
    return 0;
  }
  sort(v.begin()+l, v.begin()+r+1 );

  for(int i=0; i<l; i++){
    if(v[i] > v[l]){
      cout << "no\n";
      return 0;
    }
  }

  for(int i=r+1; i<n; i++){
    if(v[i] < v[r]){
      cout << "no\n";
      return 0;
    }
  }

  cout << "yes\n";
  cout << l+1 << " " << r+1 << "\n";
}
