/*
Given N strings, print unique strings in lexigraphical order with their frequency
N <= 1e5
|S| <= 100
*/
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
  map<string, int> m;
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    m[s] = m[s] + 1;
  }
  for(auto pr: m){
    cout << pr.first << " " << pr.second << endl;
  }
} 