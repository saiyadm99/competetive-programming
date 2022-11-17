#include <iostream>
//find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right.
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    int x = 0;
    string ss = "NO";
    
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }

    for(int i = 0; i<n; i++){
        if(2*x == sum - arr[i]){
            ss = "YES";
        }
        
        x = x + arr[i];
      
    }

    cout << ss << endl;
  }
}
