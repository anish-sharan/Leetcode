class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int first=nums[0];
        ans.push_back(first);
        for(int i=1;i<nums.size();i++)
        {
            first+=nums[i];
            ans.push_back(first);
        }
        return ans;
    }
};
