class Solution {
public:
  vector<vector<int>> v;

  int func(int ind, int amount, vector<int>& arr){
    if(amount == 0) return 1;
    if(ind<0) return 0;

    if(v[ind][amount] != -1) return v[ind][amount];
    
    int ans = 0;
    for(int i=0; i<=amount; i += arr[ind]){
      if(amount-i >= 0){
        v[ind][amount] = ans += func(ind-1, amount-i, arr);
      }
    }
    
    return v[ind][amount];
  }

  int change(int amount, vector<int>& coins) {
    v.resize(coins.size(), vector<int> (amount+1, -1));
    return func(coins.size()-1, amount, coins);
  }
};
