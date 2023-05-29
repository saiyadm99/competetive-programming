#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  // stack
  stack<int> s;
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }

  // queue
  queue<string> q;
  q.push("abc");
  q.push("def");
  q.push("ghe");
  q.push("cde");
  q.push("ghi");

  while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
  }
} 
