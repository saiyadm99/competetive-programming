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

bool cmp(pair<int, int> a, pair<int, int> b){
  if(a.first != b.first){
    return a.first < b.first;
  }else{
    return a.second > b.second;
  }
}

int main(){
  int n;
  cin >> n;
  //int ar[n];
  vector<pair<int, int>> ar(n);
  for(int i=0; i<n; i++){
    cin >> ar[i].first >> ar[i].second;
  }

  sort(ar.begin(), ar.end(), cmp);

  for(int i=0; i<n; i++){
    cout << ar[i].first << " " << ar[i].second<< "\n";
  }
} 


/*
// Input
6
4 3
5 5
5 3
25 6
7 9
8 5

// Output
4 3
5 5
5 3
7 9
8 5
25 6
*/