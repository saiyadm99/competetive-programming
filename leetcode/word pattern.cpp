// https://leetcode.com/problems/word-pattern/description/
//#include <bits/stdc++.h>
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

double eps = 1e-8;

bool wordPattern(string pattern, string s) {
  int n=pattern.size(),m=s.size();
  vector<string> v;
  string str;
  for(int i=0;i<m;i++){
    if(s[i]!=' '){
      str.push_back(s[i]);
    }
    else{
      v.push_back(str);
      str="";
    }
  }
  v.push_back(str);
  if(v.size()!=n){
    return false;
  }

  
}        

int main(){
  string pattern = "abba";
  string s = "dog cat cat dog";
  bool x = wordPattern(pattern, s);

  cout << x << endl;

  if(x){
    cout << "true";
  }else{
    cout << "false";
  }
}

//int *ptr = lower_bound(a, a+n, 5);

/*
// Input
Input: pattern = "abba", pattern = "abba"
Output: true

*/
