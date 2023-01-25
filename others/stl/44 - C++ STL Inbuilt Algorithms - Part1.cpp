//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  
  int min = *min_element(v.begin(), v.end());
  int max = *max_element(v.begin(), v.end());
  cout << "min: " << min << " max: " << max <<"\n";

  int sum = accumulate(v.begin(), v.end(), 0);
  cout << "sum: " << sum << "\n";

  int ct = count(v.begin(), v.end(), 5);
  cout << "count: " << ct << "\n";

  auto it = find(v.begin(), v.end(), 9);
  if(it != v.end()){
    cout << "Element: " << *it << "\n";
  }else{
    cout << "Not Found" << "\n";
  }

  // reverse vector
  reverse(v.begin(), v.end());

  for(auto val: v){
    cout << val << " ";
  }
  cout << "\n";
  string s = "abcdefgdsfs";
  reverse(s.begin(), s.end());
  cout << s << "\n";

} 


//int *ptr = lower_bound(a, a+n, 5);

/*
// Input
6
4
5
5
25
7
8

// Output
min: 4 max: 25
sum: 54
count: 2
Not Found
8 7 25 5 5 4 
sfsdgfedcba
*/