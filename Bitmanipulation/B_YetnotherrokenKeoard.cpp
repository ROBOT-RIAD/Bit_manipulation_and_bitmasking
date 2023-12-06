#include<bits/stdc++.h>
#define fo(i, s, n) for(int i=s; i<n; i++)
#define ffo(i, s, n) for(int i=s; i<=n; i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string s1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'b') {
                int j = s1.size() - 1;
                while (j >= 0 && (s1[j] < 'a' || s1[j] > 'z')) {
                    j--;
                }
                if (j >= 0) {
                    s1[j] = ' ';
                }
            }
            else if(s[i] == 'B') {
                int j = s1.size() - 1;
                while (j >= 0 && (s1[j] < 'A' || s1[j] > 'Z')) {
                    j--;
                
                }
                if (j >= 0) {
                    s1[j] = ' ';
                }
            }           
            else {
                s1 += s[i];
            }
        }
        string ans="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                continue;
            }
            else
            {
                ans+=s1[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
