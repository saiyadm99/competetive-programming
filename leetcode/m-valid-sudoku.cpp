// https://leetcode.com/problems/valid-sudoku/
// #include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
  int rows[9][9]={0};
  int cols[9][9]={0};
  int blocks[3][3][9]={0};
  for(int r=0;r<9;r++){
    for(int c=0;c<9;c++){
      if(board[r][c]!='.'){
        int number=board[r][c]-'1';
        if(rows[r][number]++)
          return 0;
        if(cols[c][number]++)
          return 0;
        if(blocks[r/3][c/3][number]++)
          return 0;
      }
    }  
  }    
  return 1;
}

int main(){
  vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
  };

  cout << isValidSudoku(board);
}

//int *ptr = lower_bound(a, a+n, 5);
/*
// Input

// Output

*/