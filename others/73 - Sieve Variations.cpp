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

const int N = 1e5 + 10;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0);
vector<int> hp(N, 0);

int main() {
  isPrime[0] = isPrime [1] = false;
  for(int i=2; i<N; i++){
    if(isPrime[i] == true){
      lp[i] = hp[i] = i;
      for(int j=2*i; j<N; j = j+i){
        isPrime[j] = false;
        hp[j] = i;
        if(lp[j] == 0){
          lp[j] = i;
        }
      }
    }
  }

  int num;
  cin >> num;
  vector<int> prime_factors;
  while(num > 1){
    cout << num << "\n";
    int prime_factor = hp[num];
    while(num % prime_factor == 0){
      num = num/prime_factor;
      prime_factors.push_back(prime_factor);
    }
  }

  // for(int factor: prime_factors){
  //   cout << factor << " ";
  // }
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/