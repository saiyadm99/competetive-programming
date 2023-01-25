/*
Given array a of N integers. Given Q queries and in 
each query given L and R print sum of array elements 
from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/

//Optemized with precounting
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e5+10 + 10;
int a[N];
// array for prefix sum
long long int p[N];

int main(){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> a[i];
    p[i] = p[i-1] + a[i];
  }
  
  int q;
  cin >> q;
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << p[r] - p[l-1] << endl;
    long long sum = 0;
  }
}


