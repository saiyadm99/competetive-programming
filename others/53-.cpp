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
using namespace std;

const int N = 1e6 + 10;
long long M;
long long ar[N];

bool isEnHi(long long mid, int n){
  long long totalWood = 0;
  for(int i=0; i<n; i++){
    if(ar[i] > mid){
      totalWood = totalWood + (ar[i] - mid);
    }
  }
  return M <= totalWood;
}

int main() {
  int n;
  cin >> n >> M;
  for(int i=0; i<n; i++){
    cin >> ar[i];
  }

  long long lo = 0, hi = 1e9 + 10;
  long long mid;
  while(hi - lo > 1){
    mid = (hi + lo) / 2;
    if(isEnHi(mid, n)){
      lo = mid;
    }else{
      hi = mid-1;
    }
  }

  if(isEnHi(hi, n)){
    cout << hi;
  }else{
    cout << lo;
  }
}


//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/