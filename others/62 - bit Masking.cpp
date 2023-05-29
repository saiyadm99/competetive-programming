// https://codeforces.com/blog/entry/73558
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


int main(){
  int n;
  cin >> n;
  vector<int> masks(n, 0);
  for(int i=0; i<n; i++){
    int num_workers;
    int mask = 0;
    cin >> num_workers;
    for(int i=0; i<num_workers; i++){
      int day;
      cin >> day;
      mask = (mask | (1 << day));
    }
    masks[i] = mask;
  }

  int max_days = 0;
  int person1 = -1;
  int person2 = -1;

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      int intersection =  (masks[i] & masks[j]);
      int common_days = __builtin_popcount(intersection);
      if(common_days > max_days){
        max_days = common_days;
        person1 = i;
        person2 = j;
      }
    }
  }
  cout << max_days;
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/