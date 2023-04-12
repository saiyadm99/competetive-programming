//https://leetcode.com/problems/valid-parentheses/
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
#include <string>
using namespace std;


bool isValid(string s) {
  stack<char> st;
  unordered_map<char, int> m = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
  for(auto it: s){  
    if(m[it] < 0){
      st.push(it);
    }else{
      if(st.empty()){
        return false;
      }

      char top = st.top();
      st.pop();
      if(m[it] + m[top] != 0){
        return false;
      }
    }
  }
  if(st.empty()){
    return true;
  }else{
    return false;
  }
}

int main() {
  string s;
  cin >> s;
  cout << isValid(s) << "\n";
}

