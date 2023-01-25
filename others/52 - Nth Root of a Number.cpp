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

double eps = 1e-7;

double multiply(double mid, int n){
  double ans = 1;
  for(int i=0; i<n; i++){
    ans = mid * ans;
  }
  return ans;
}

int main() {
  double x;
  int n;
  cin >> x >> n;
  double lo = 1, hi = x, mid; 
  while(hi - lo > eps){
    mid = (hi+lo) /2;
    //cout << "hi: " << hi <<"\n" << "mid " << mid<< "\n" << "lo " << lo << endl << endl;
    if(multiply(mid, n) < x){
      lo = mid;
    }else{
      hi = mid;
    }
  }
  cout << setprecision(10) << lo << "\n" << hi << endl;
  cout << pow(x, 1.0/n) << endl;
}

//int *ptr = lower_bound(a, a+n, 5);

/*
// Input

// Output

*/