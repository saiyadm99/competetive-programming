/*
There are N children and K toffees K<N 
Count the number of ways to distribute toffee amont N students such that each 
students get 1 toffee only --> nCk, %M, 
M = 10^9+7, N < 10^6, K < N < 10^6
n! / ((n-r) ! * r)
*/

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

const int M = 1e9 + 7;
const int N = 1e6 + 10;

int binExp(int a, int b, int m){
  int result = 1;
  while(b>0){
    if(b&1){
      result = (result * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b = b >> 1;
  }
  return result;
}

int main() {
  int fact[N];
  int main(){
    fac[0] = 1;
    for(int i=1; i<N; i++){
      fact[i] = fact[i-1]
    }
  }
  int q;
  cin >> q;
  while(q--){
    int n, k;
    cin >> n >> k;
    int ans = fact[n];
    int den = (fact[n-r] * 1LL * fact[r]) % M; 
    ans = ans * binExp(den, M-2, M);
    cout << ans << endl;
  }
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/