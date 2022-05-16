#include<bits/stdc++.h>
using namespace std;
int secondHighest(string s)
{

    int arr[10]={0},t;
    vector<int> tarr;
    bool first=false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            t=int(s[i]-'0');
            arr[t]++;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            tarr.push_back(i);
        }
    }
    sort(tarr.begin(),tarr.end());
    reverse(tarr.begin(),tarr.end());
    if(tarr.size()<2)
    {
        return -1;
    }
    return tarr[1];
}
int main()
{
    string s="abc1111";
    cout<<secondHighest(s);
}
