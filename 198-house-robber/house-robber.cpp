class Solution {
public:
    int rob(vector<int>& nums) {
        int arraySize = nums.size();
        if(arraySize==1){
            return nums[0];
        }
    
        int a = nums[0];
        int b = max(a,nums[1]);
        
        for (int itr = 2; itr < arraySize; itr++){
            int c = b;
            b = max(b, nums[itr]+a);
            a = c;
        }
        return b;
    }
};