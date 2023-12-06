
//count setbit
#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    int ans=0;
    while(n>0)
    {
        ans+=n&1;
        n>>=1;
    }
    cout<<ans<<endl;

    return 0;
}