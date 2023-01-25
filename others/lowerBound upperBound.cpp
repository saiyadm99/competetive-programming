//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int lower_bound(vector<int> v, int element){
  int lo = 0;
  int hi = v.size() - 1;
  int mid;
  while(hi - lo > 1){
    int mid = (hi+lo) / 2;
    if(v[mid] < element){
      lo = mid + 1;
    }else{
      hi = mid;
    }
  }

  if(v[lo] >= element){
    return lo;
  }
  if(v[hi] >= element){
    return hi;
  }
  return -1;
}

int upper_bound(vector<int> v, int element){
  int lo = 0;
  int hi = v.size() - 1;
  int mid;
  while(hi - lo > 1){
    int mid = (hi+lo) / 2;
    if(v[mid] <= element){
      lo = mid + 1;
    }else{
      hi = mid;
    }
  }

  if(v[lo] > element){
    return lo;
  }
  if(v[hi] > element){
    return hi;
  }
  return -1;
}

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  
  int element;
  cin >> element;
  int low = lower_bound(v, element);
  cout << v[low] << endl;
  int upp = upper_bound(v, element);
  cout << v[upp] << endl;
}

//int *ptr = lower_bound(a, a+n, 5);

/*
// Input

// Output

*/