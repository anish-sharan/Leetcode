int maxOperations(vector<int>& nums, int k)
{
    map<int,int> mp;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        int d=k-nums[i];
        if(mp.find(d)!=mp.end())
        {
            count++;
            mp[d]--;
            if(mp[d]==0)
            {
                mp.erase(d);
            }
        }
        else
        {
            mp[nums[i]]++;
        }
    }
    return count;
}
