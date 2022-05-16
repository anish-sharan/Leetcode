#include<bits/stdc++.h>
#define coutA(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define nl cout<<endl;
using namespace std;


class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int k)
    {
        data=k;
        left=right=NULL;
    }
};
void print(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void getInorder(node *root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    v.push_back(root->data);
    getInorder(root->left,v);
    getInorder(root->right,v);
}
void solve(node *root1,node *root2)
{
    print(root1);
    cout<<endl;
    print(root2);
    cout<<endl;
    vector<int> v1,v2;
    getInorder(root1,v1);
    getInorder(root2,v2);
    v1.insert(v1.end(),v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    for(auto it:v1)
    {
        cout<<it<<" ";
    }
//    return v1;
}
int main()
{
    node *root=new node(2);
    root->left=new node(1);
    root->right=new node(4);

    node *root1=new node(1);
    root1->left=new node(0);
    root1->right=new node(3);

    solve(root,root1);

}
