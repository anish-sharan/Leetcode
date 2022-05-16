#include<bits/stdc++.h>
using namespace std;
void solve(string s,string t)
{
    cout<<s<<" "<<t<<endl;
    int arr[26]={0};
    char ch='a',ans,ch2='a';
    for(int i=0;i<s.length();i++)
    {
        arr[int(s[i]-'a')]++;
    }
    for(int i=0;i<t.length();i++)
    {
        arr[int(t[i]-'a')]--;
    }
    for(auto it:arr)
    {
        cout<<ch<<"-"<<it<<" ";
        ch++;
    }
    cout<<endl;
    for(int i=0;i<26;i++)
    {
        cout<<ch2<<" ";
        if(arr[i]<0)
        {
            ans=ch2;
            break;
        }
        ch2++;
    }
    cout<<endl<<"ANS : "<<ans;
}
int main()
{
    string s="",t="z";
    solve(s,t);
}
