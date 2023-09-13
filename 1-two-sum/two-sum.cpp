class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int,int> hmap;
        for(int itr=0; itr<nums.size(); itr++){
        
            if(hmap.find(nums[itr])==hmap.end())
                hmap.insert({target-nums[itr],itr});
            
            else {
                ans.push_back(hmap[nums[itr]]);
                ans.push_back(itr);
                break;
            }
        }
        return ans;
    }
};