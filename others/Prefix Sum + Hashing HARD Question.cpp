//https://youtu.be/zwlCeWUGlE0
//Optemized with prefix-sum and hashing both
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5+10;
int hsh[N][26];

int main() {
  int t;
  cin >> t;
  while(t--){
    for(int i=0; i<N; i++){
      for(int j=0; j<26; j++){
        hsh[i][j] = 0;
      }
      
    }
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
      hsh[i+1][s[i] - 'a']++;
    }
    for(int i=0; i<26; i++){
      for(int j=1; j<=n; j++){
        hsh[j][i] += hsh[j-1][i];
      }
    }
    while(q--){
      int l, r;
      cin >> l >> r;
      int oddCt = 0;

      for(int i=0; i<26; i++){
        int charCt = hsh[r][i] - hsh[l-1][i];
        if(charCt % 2 != 0) oddCt++;
      }
     
      if(oddCt>1){
        cout << "NO\n";
      }else{
        cout << "YES\n";
      }
    }
  }
}

/*
// before full optemized
int main() {
  int t;
  cin >> t;
  while(t--){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while(q--){
      int l, r;
      cin >> l >> r;
      int hsh[26] = {0};
      l--; r--;
      for(int i=l; i<=r; i++){
        hsh[s[i]-'a']++;
      }

      int ct = 0;
      for(int i=0; i<26; i++){
        if(hsh[i] % 2 != 0){
          ct++;
        }
      }
      if(ct>1){
        cout << "NO\n";
      }else{
        cout << "YES\n";
      }

    }
  }
}
*/
   
/*
// input
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4

// output
NO
NO
YES
NO
NO
YES
NO
YES
YES
YES
*/