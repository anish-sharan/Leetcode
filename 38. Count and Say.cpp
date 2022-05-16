class Solution {
public:
    string countAndSay(string n)
    {
            // cout<<"check -> "<<n<<endl;
            int count=1;
            string ans;
            char t=n[0];
            for(int i=1;i<=n.length();i++)
            {
                if(n[i]!=t)
                {
                    ans+=to_string(count);
                    ans+=t;
        //            ans+=",";
        //            cout<<t<<" "<<count<<endl;
                    count=1;
                    t=n[i];
                }
                else
                {
                    count++;
                }
            }
            return ans;
        }
    string countAndSay(int n)
    {
        vector<string> ans;
        string str,res;
        ans.push_back("1");
        for(int i=1;i<n;i++)
        {
            str=countAndSay(ans[i-1]);
            ans.push_back(str);
        }
        // res=ans[n-1];
        return ans[n-1];
    }
};
