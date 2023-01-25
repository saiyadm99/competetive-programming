#include <iostream>
//#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int a , b, c;
  cin >> a >> b >> c;
  int cth_num;
  int j = 0;
  for(int i=2; j<c; i++){
    if(i%a == 0 || i%b == 0){
      cth_num = i;
      j++;
    }  
  }

  int lpc;
  for(int i=0; i<=a*b; i++){
    if(i%a == 0 && i%b == 0){
      lpc = i;
    }
  }

  int step;
  if(cth_num % a == 0 && cth_num % b == 0){
    step = lpc;
  }else if(cth_num % a == 0){
    step = a;
  }else{
    step = b;
  }

  for(int i = cth_num; i>=0; i = i-step){
    cout << i << " ";
  }
}


