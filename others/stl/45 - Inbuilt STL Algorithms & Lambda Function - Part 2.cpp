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

int main(){
  // Lambda Function
  //auto sum = [](int x, int y){return x+y;};
  //cout << sum(2, 3);

  vector<int> v = {-2, -3, -5};
  // check all element if positive
  cout << all_of(v.begin(), v.end(), [](int x){return x>0;}) << endl ;

  // check if any is positive
  cout << any_of(v.begin(), v.end(),
    [](int x){return x>0;}) << endl;

  cout << none_of(v.begin(), v.end(),
    [](int x){return x>0;});

} 


//int *ptr = lower_bound(a, a+n, 5);

/*
// Input

// Output

*/