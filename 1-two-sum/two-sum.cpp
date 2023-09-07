class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) 
    {
        vector<int> ans;
        
        int start=0,end=a.size()-1;
        bool flag=0;
        map<int, int> umap;
        for(int i=0;i<a.size();i++)
        {
            if(umap.find(target-a[i])!=umap.end())
            {
                ans.push_back(i);
                ans.push_back(umap[target-a[i]]);
                return ans;
            }
            else
            {
                umap[a[i]]=i;
            }
        }
        // return ans;
        
        return ans;
    }
};
		// 	result.push_back(hash[numberToFind] + 1);
		// 	result.push_back(i + 1);			
		// 	return result;
		// }