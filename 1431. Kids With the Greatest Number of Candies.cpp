class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0],diff;
        for(auto it:candies)
        {
            if(it>max)
            {
                max=it;
            }
        }
        diff=max-extraCandies;
        vector<bool> ans(candies.size(),true);
        if(max<extraCandies)
        {
            return ans;
        }
        else
        {
            for(int i=0;i<candies.size();i++)
            {
                if(candies[i]<diff)
                {
                    ans[i]=false;
                }
            }
        }
        return ans;
    }
};
