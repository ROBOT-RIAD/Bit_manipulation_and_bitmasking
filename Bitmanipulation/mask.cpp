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
        int x;cin>>x;
        int mask=1<<x;
        if((n&mask)==0)cout<<0<<endl;
        else
        {
            cout<<1<<endl;
        }
        
    }
    return 0;
}