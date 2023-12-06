#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int count=0;
        while(n>1)
        {
            n>>=1;
            count++;
        }
        int ans=1<<count;
        cout<<ans-1<<endl;    
    }
    return 0;
}