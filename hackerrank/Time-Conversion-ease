//A single string  that represents a time in 12-hour clock format
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
  string hour = s.substr(0, 2); 
  string minuite = s.substr(3, 2);
  string second = s.substr(6, 2);
  string period = s.substr(8, 2);

  int intHour = stoi(hour);
  
  string times = "";

  if(period == "AM" && intHour == 12){
    times = "00:" + minuite + ":" + second;
    
  }else if(period == "PM" && intHour == 12){
    times = "12:" + minuite + ":" + second;
    
  }else if (period == "PM"){
    int hour = intHour + 12;
    string sHour = to_string(hour);
    times = sHour + ":" + minuite + ":" + second;
    
  }else if(period == "AM"){
    times = hour + ":" + minuite + ":" + second;
  }
  
  return times;
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
