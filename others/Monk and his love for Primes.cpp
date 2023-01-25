//https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char upper(char c) {
  return 'A' + (c-'a');
}

char lower(char c){
  return 'a' + (c-'A');
}

int main() {
  string s;
  cin >> s;
  for(int i=0; i<s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      s[i] = upper(s[i]);
    }else if(s[i] >= 'A' && s[i] <= 'Z'){
      s[i] = lower(s[i]);
    }
  }

  int result = 0;
  for(int i=0; i<s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      result = result - s[i];
    }else if(s[i] >= 'A' && s[i] <= 'Z'){
      result = result + s[i];
    }
  }

  if(result < 0){
    result = result * -1;
  }

  int flag = 1;
  for(int i = 2; i<result; i++){
    if(result % i == 0){
      flag = 0;
      break;
    }
  }
  cout << flag;
}