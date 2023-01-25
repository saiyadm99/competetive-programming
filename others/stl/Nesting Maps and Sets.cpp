// Nested Map set example
#include <iostream>
//#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <vector>
//#include <string>
using namespace std;

int main(){
  
  map<pair<string, string>, vector<int>> m;

  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string fn, ln;
    cin >> fn >> ln;
    int ct;
    cin >> ct;
    for(int j=0; j<ct; j++){
      int x;
      cin >> x;
      m[{fn, ln}].push_back(x);
    }
  }
  for(auto &pr: m){
    auto &fullName = pr.first;
    auto &list = pr.second;
    cout << fullName.first << " " << fullName.second << " ";
    cout << list.size() << endl;
    for(auto &element : list){
      cout << element << " ";
    }
    cout << endl;
  }
} 
 
/* 
// input 
4
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
a a 2
9 9
// output
a a 2
9 9 
a b 4
1 2 3 4 
c d 2
1 2 
d f 3
2 3 4 
*/