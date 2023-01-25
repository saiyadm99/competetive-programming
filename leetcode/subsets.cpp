// https://leetcode.com/problems/subsets/
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

vector<vector<int>> subsetAll;

void generate(vector<int> &subset, int i, vector<int> &nums){
  if(i == nums.size()){
    subsetAll.push_back(subset);
    return;
  }

  // ith element not in subset
  generate(subset, i+1, nums);

  // ith element in subset
  subset.push_back(nums[i]);
  generate(subset, i+1, nums);
  subset.pop_back();
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  
  for(int i=0; i<n; i++){
    cin >> nums[i];
  }
  vector<int> empty;
  generate(empty, 0, nums);

  for(auto subset: subsetAll){
    for(auto ele: subset){
      cout << ele << " ";
    }
    cout << endl;
  }
}

//int *ptr = lower_bound(a, a+n, 5);

/*
// Input
4
1 2 3 5
// Output

*/