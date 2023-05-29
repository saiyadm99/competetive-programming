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

const long long M = 1e18;
int binMultiply(long long a, long long b);

int binExp(int a, int b){
  a %= M;
  int ans = 1;
  while(b>0){
    if(b&1){
      ans = binMultiply(a, a);
    }
    a = binMultiply(a, a);
    b = b >> 1;
  }
  return ans;
}

int binMultiply(long long a, long long b){
  a %= M;
  int ans = 0;
  while(b>0){
    if(b&1){
      ans = (ans + a) % M;
    }
    a = (a + a) % M;
    b = b >> 1;
  }
  return ans;
}

int main(){
  cout << binExp(2, 10);
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/