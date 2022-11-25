#include <iostream>
#include <vector>
using namespace std;

int main() {
  int attendee, topics;
  cin >> attendee >> topics;
  
  vector<string> s(attendee);
  
  for(int i=0; i<attendee; i++){
    cin >> s[i];
  }

  int team = 0;
  int know = 0;
  
  for(int i=0; i<attendee; i++){
    for(int j=i+1; j<attendee; j++){
      int temp = 0;
      for(int k=0; k<topics; k++){
        if(s[i][k] == '1' || s[j][k] == '1'){
          temp++;
        }
      }

      if(temp>know){
        know = temp;
        team = 1;
      }else if(temp == know){
        team++;
      }
    }
  }

  cout << know << endl << team;
}
