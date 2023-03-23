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

int N = 1e5+10;

vector<int> v(N);

int bins(int x, int n){
  int lo = 1;
  int hi = n;
  while(hi-lo>1){
    int mid = (hi+lo)/2;
    if(x < v[mid]){
      hi = mid-1;
    }else{
      lo = mid;
    }
  }
  if(v[hi] <= x){
    return hi;
  }else if(v[lo] <= x){
    return lo;
  }else{
    return lo-1;
  }
}
 
int main() {
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.begin()+n+1);

  int q;
  cin >> q; 

  for(int i=0; i<q; i++){
    int x; 
    cin >> x;
    
    cout << bins(x, n) << "\n";
  }
}
