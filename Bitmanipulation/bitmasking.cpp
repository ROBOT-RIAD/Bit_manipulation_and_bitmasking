#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;
// total --->n*2^n
int main() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<vector<int>>subsets;
    for(int i=0;i<(1<<n);i++)
    {
        vector<int>subset;
        for(int j=0;j<n;j++)
        {
            int mask=1<<j;
            if((i&mask)==0)
            {

            }
            else
            {
                subset.push_back(a[j]);
            }
        }
        subsets.push_back(subset);
    }
    for(int i=0;i<subsets.size();i++)
    {
        for(int j=0;j<subsets[i].size();j++)
        {
            cout<<subsets[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}