class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int i){
        if(i >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=i; j<nums.size(); j++){
            swap(nums[i], nums[j]);
            solve(nums, ans, i+1);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        solve(nums, ans, i);
        set<vector<int>> temp;
        for(auto it : ans){
            temp.insert(it);
        }
        vector<vector<int>> finalAnswer;
        for(auto it : temp){
            finalAnswer.push_back(it);
        }
        return finalAnswer;
    }
};