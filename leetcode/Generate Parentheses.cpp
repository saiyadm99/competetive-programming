// https://leetcode.com/problems/generate-parentheses/
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

vector<string> valid;

void genr(string &s, int open, int close){
  if(open == 0 && close == 0) {
    valid.push_back(s);
    return;
  }
  if(open>0){
    s.push_back('(');
    genr(s, open-1, close);
    s.pop_back();
  }
  if(close>0){
    if(open<close){
      s.push_back(')');
      genr(s, open, close-1);
      s.pop_back();
    }
  }
}

int main() {
  int n;
  cin >> n;
  string s;
  genr(s, n,n);
  for(auto ele : valid){
    cout << ele << endl;
  }
}

//int *ptr = lower_bound(a, a+n, 5);

/*
// Input
3
// Output
((()))
(()())
(())()
()(())
()()()
*/