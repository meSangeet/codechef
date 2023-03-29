#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string u;
        cin>>u;
        string ans;
        ans.push_back(u[0]);
        char prev = u[0];
        int len = u.length();
        for(int i = 1; i<=(len-1); i++)
        {
            if(u[i] == prev){
                if(i != (len-1))
                {
                    if(u[i+1] == prev) {i++; continue;}
                }
            }
            ans.push_back(u[i]);
            prev = u[i];
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}