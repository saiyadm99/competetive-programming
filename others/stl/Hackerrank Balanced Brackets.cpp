// https://www.hackerrank.com/challenges/balanced-brackets/problem?
//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

unordered_map<char, int> symbols = {
  { '[',  -1},
  { '(',  -2},
  { '{',  -3},
  { ']',   1},
  { ')',   2},
  { '}',   3}
};

string isBalanced(string s){
  stack<char> st;
  for(char bracket : s){
    if(symbols[bracket] < 0){
      st.push(bracket);
    }else{
      if(st.empty()){
        return "NO";
      }else{
        //char top = st.top();
        if(symbols[st.top()] + symbols[bracket] == 0){
          st.pop();
        }else{
          return "NO";
        }
      }
    }
  }
  if(st.empty()){
    return "YES";
  }else{
    return "NO";
  }
}
 
int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    cout << isBalanced(s);
  }
} 

/*
// input
3
{[()]}
{[(])}
{{[[(())]]}}

// output
YES
NO
YES
*/