class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int ind1=0,ind2=n;
        vector<int> ans;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0)
            {
                ans.push_back(nums[ind1]);
                ind1++;
            }
            else
            {
                ans.push_back(nums[ind2]);
                    ind2++;
            }
        }
        return ans;
    }
};
