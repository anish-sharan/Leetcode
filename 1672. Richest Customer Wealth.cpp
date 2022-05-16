#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        for(int i=0;i<accounts.size();i++)
        {
            int t=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                t+=accounts[i][j];
            }
            ans.push_back(t);
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};
int main()
{
    int ans;
    vector<vector<int>> v={{1,2,3},{3,2,1}};
    Solution ob;
    ans=ob.maximumWealth(v);
    cout<<ans;
}
