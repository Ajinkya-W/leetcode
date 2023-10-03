class Solution {
public:
    int rob(vector<int>& nums) {
        int arraySize = nums.size();
        if(arraySize==1){
            return nums[0];
        }
    
        vector<int> dp(arraySize);
        dp[0] = nums[0];
        dp[1] = max(dp[0],nums[1]);
        
        for (int itr = 2; itr < arraySize; itr++){
            dp[itr] = max(dp[itr-1], nums[itr]+dp[itr-2]);
        }
        return dp[arraySize-1];
    }
};