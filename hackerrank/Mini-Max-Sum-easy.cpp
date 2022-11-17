// Mini-Max Sum hackerrank
// Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int arr[5];
  for(int i = 0; i<5; i++){
    cin >> arr[i];
  }

  long int sum = 0, min, max;

  min = arr[0];
  max = arr[0];

  for(int i=0; i<5; i++){
    sum = sum + arr[i];

    if(min<arr[i]){
      min = arr[i];
    }
    if(max>arr[i]){
      max = arr[i];
    }
  }

  cout << sum - min << " " << sum -max ;
}
