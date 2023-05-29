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

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);

int main() {
  isPrime[0] = isPrime [1] = false;
  for(int i=2; i<N; i++){
    if(isPrime[i] == true){
      for(int j=2*i j<N; j = j+i){
        isPrime[j] = false;
      }
    }
  }

  for(int i = 1; i<100; i++){
    cout << isPrime[i] << endl;
  }
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/