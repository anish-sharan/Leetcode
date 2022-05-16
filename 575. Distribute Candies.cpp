#include<bits/stdc++.h>
using namespace std;
int distributeCandies(vector<int>& candyType)
{
    set<int> s;
    int half=candyType.size()/2;
    for(int i=0;i<candyType.size();i++)
    {
        s.insert(candyType[i]);
    }
    if(s.size()<half)
    {
        return s.size();
    }
    else
    {
        return half;
    }
}
int main()
{
    vector<int> v={6,6,6,6};
    cout<<distributeCandies(v);
}
