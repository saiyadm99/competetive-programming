// C++ program to convert string
// to char array Using for loop
//the smallest lexicographically higher string possible or no answer
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// driver code
int main() {
  int t;
  cin >> t;

  vector <string> str(t);
  vector <string> str2;

  for(int i=0; i<t; i++){
    cin >> str[i];
  }

  // main loop
  for(int i=0; i<t; i++){
    string temp = str[i];
    int size = temp.size();

    // converted array
    char p[size];

    // convert string to array
    for(int j=0; j<size; j++){
      p[j] = temp[j];
    }

    // main task
    char firstChar;
    int firstCharIndex = -1;

    char secChar;
    int secCharIndex = -1;
    
    for(int j=size-1; j>0; j--){
      if(p[j]>p[j-1]){
        firstCharIndex = j-1;
        break;
      }
    }

    if(firstCharIndex != -1){
      for(int j=size-1; j>firstCharIndex; j--){
        if(p[j]>p[firstCharIndex]){
          secCharIndex = j;
          break;
        }
      }  
    }

    if(firstCharIndex != -1){
      swap(p[firstCharIndex], p[secCharIndex]);

      sort(p+firstCharIndex+1, p+size);
      
      for(int j=0; j<size; j++){
        cout << p[j];
      }
    }else{
      cout << "no answer";
    }
    
    //cout << " " << firstCharIndex << " " << secCharIndex << endl;
    cout << endl;
  }
}
