#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    int i;cin>>i;
    int x=63;
    int mask=1<<i;
    int newmask=(x^mask);
    int ans=(n&newmask);
    cout<<ans;
    return 0;
}