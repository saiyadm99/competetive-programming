//return the index of the character to remove or -1 
#include <iostream>
using namespace std;

bool isPalindrome2(string s){
  for(int i = 0; i < s.size() / 2; i++){
      
    if(s[i] != s[s.size() -1 -i]){
      return false;
    } 
  }
  return true;
}

int isPalindrome(string s){
  int size = s.size();
    
  for(int i = 0; i < size / 2; i++){
      
    if(s[i] != s[s.size() -1 -i]){
      string x;
      for(int j = i; j<s.size() -1 -i; j++){
        x.push_back(s[j]);
      }
      
      if(isPalindrome2(x)){
        return s.size() -1 -i;
      }else {
        return i;
      }
    } 
  }
  return -1;
}

int main() {
    int t;
    cin >> t;
   
    while(t--){
        string s;
        cin >> s;
        cout << isPalindrome(s) << endl;
    }
}

