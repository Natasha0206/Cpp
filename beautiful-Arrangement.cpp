class Solution {
public:
    void solve(vector<int>& nums, int n, int& ans, int cur_num){
        //base case
        if(cur_num >= n+1){
            ans++;
            return;
        }

        //recursive relation
        for(int j=1; j<=n; j++){
            if(nums[j] == 0 && (cur_num % j == 0 || j % cur_num == 0)){
                nums[j] = cur_num;
                solve(nums, n, ans, cur_num+1);
                //backtracking
                nums[j] = 0;
            }
        }
    }


    int countArrangement(int n) {
        vector<int> nums(n+1);
        int ans = 0, ind = 1;
        solve(nums, n, ans, ind);
        return ans;
    }
};