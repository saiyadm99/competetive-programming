class Solution {
public:
  vector<int> v;

  bool dfs(int i, vector<int> &nums){
    if(i == nums.size()) return true;
    if(v[i] != -1) return v[i];

    bool ans = false;

    if(i<nums.size()-1 && nums[i] == nums[i+1]){
      ans = ans || dfs(i+2, nums);
    }

    if(i<nums.size()-2){
      if((nums[i] == nums[i+1] && nums[i+1] == nums[i+2]) || 
        (nums[i]+1 == nums[i+1] && nums[i+1] == nums[i+2]-1)){
          ans = ans || dfs(i+3, nums);
        }
    }

    return v[i] = ans;
  }

  bool validPartition(vector<int>& nums) {
    v.resize(nums.size(), -1);
    return dfs(0, nums);
  }
};
