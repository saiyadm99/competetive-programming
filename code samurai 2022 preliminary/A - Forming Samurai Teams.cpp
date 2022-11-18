include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;

    string s[n];
    for(int i=0; i<n; i++){
      cin >> s[i];
    }

    sort(s, s+n);
    int count = 1;
    string ss = "";

    for(int i=0; i<n-1; i++){
      if(s[i][0] == s[i+1][0]){
        count ++;
      }else{
        count = 1;
      }

      if(count == 3){
        ss = ss + s[i][0];
      }
    }

    int size = ss.length();

    if(size == 0){
      cout << "impossible" << endl;
    }else{
      cout << ss << endl;
    }
  }
}
