//Count a number how many time in the array *using precounting technicque
/*
Given array a of N integers. Given Q queries and
in each query given a number X, print count of that number in array.
Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

//Optemized with precounting
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 10e7 + 10;
// hash array
int hsh[N];

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
    hsh[a[i]]++;
  }

  int q;
  cin >> q;
  while(q--){
    int x;
    cin >> x;
    cout << hsh[x] << endl;
  }
}


/*
// Non optemized version 
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int q;
  cin >> q;
  while(q--){
    int x;
    cin >> x;
    int ct = 0;
    for(int i=0; i<n; i++){
      if(a[i] == x){
        ct++;
      }
    }
    cout << ct << endl;
  }
}
*/