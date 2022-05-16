double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> v;
    double ans;
    int n=nums1.size()+nums2.size(),half;
    setprecision(5);
    for(auto it:nums1)
    {
        v.push_back(it);
    }
    for(auto it:nums2)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    half=n/2;
    if(n%2!=0)
    {
        ans=v[half];
    }
    else
    {
        ans=v[half];
        ans+=v[half-1];
        ans/=2;
    }
    return ans;
}
