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
        int x=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            x=x^a;
        }
        if(n%2==0)
        {
            if(x==0)
            cout<<0<<endl;
            else
            cout<<-1<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
        
    }
    return 0;
}