/*
Given 2d array of N*N integers. Given Q queries 
and each query given a, b, c and d print of square
represented by (a, b) as top left point and (c, d)
as top bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/

//Optemized with precounting
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
// array for prefix sum
long long int pSum[N][N];

int main(){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cin >> ar[i][j];
      pSum[i][j] = ar[i][j] + pSum[i-1][j] + pSum[i][j-1] - pSum[i-1][j-1];
    }
  }
  
  int q;
  cin >> q;
  while(q--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << pSum[c][d] - pSum[c][b-1] - pSum[a-1][d] + pSum[a-1][b-1] << endl ; 
  }
}

// Not optemized
// while(q--){
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     int sum = 0;
//     for(int i=a; i<=c; i++){
//       for(int j=b; j<=d; j++){
//         sum = sum + ar[i][j];
//       }
//     }
//     cout << sum << endl;
//   }

