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
using namespace std;

const int M = 1e9 + 10;

int binExpRecur(int a, int b){
  if(b==0) return 1;
  long res = binExpRecur(a, b/2);
  if(b&1){
    return (a *(res * 1LL * res) %M) %M;
  }else{
    return res * 1LL * res;
  }
}

int binExpIter(int a, int b){
  int ans = 1;
  while(b>0){
    if(b&1){
      ans = (ans * 1LL * a) % M;
    }
    a = (a * 1LL * a) % M;
    b = b>>1;
  }
  return ans;
}

int main() {
 int a = 2, b = 13;
 cout << binExpRecur(a, b) << "\n";
 cout << binExpIter(a, b) << "\n";
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/