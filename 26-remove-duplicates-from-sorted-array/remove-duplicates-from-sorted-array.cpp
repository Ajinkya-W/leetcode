class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int index=0;
        if(nums.size()==0)
            return 0;
        else if(nums.size()==1)
            return index+1;
        bool flag=0;
        for(int i=1; i < nums.size(); i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[++index]=nums[i];
            }
        }
        return index+1;
    }
};
/*

        if(nums.size()==0)
            return 0;
        int i=0;
        for(int j=1; j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
*/