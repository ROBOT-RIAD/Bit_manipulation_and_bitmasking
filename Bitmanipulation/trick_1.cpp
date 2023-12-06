#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ans=ans^a;
    }
    cout<<ans<<endl;
    return 0;
// x^x=0