//find the lonly integer form given array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lonelyinteger(vector<int> a) {
    int s = a.size();
    int x;
    
    for(int i=0; i<s; i++){
        int y = 0;
        for(int j=0; j<s; j++){
            if(i != j && a[i] == a[j]){
                y = 1;
                break;
            }
        }
        
        if(y == 0){
            x = a[i];
            break;
        }
    }
    return x;
}

int main() {
  int t;
  cin >> t;

  vector<int> a(t);
  
  for(int i=0; i<t; i++){
    cin >> a[i];
  }

  cout << lonelyinteger(a);
}
