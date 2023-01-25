#include <iostream>
//#include <bits/stdc++.h>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
//#include <string>
using namespace std;

void print(set<string> &s){
  for(auto value:s){
     cout << value << endl;
  }
}
 
 
int main(){
  set<string> s;
  s.insert("abc");
  s.insert("zsdf");
  s.insert("bcd");

  // print set

  auto it = s.find("abc");
  if(it != s.end()){
    cout << (*it) << endl;
    s.erase(it);
  }

  s.erase("abc");

  print(s);
} 

// multiset allow multiple value. erese by it erease first item that find but s.erese("xxx") erese
// all "xxx";