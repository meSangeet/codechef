#include <bits/stdc++.h>
using namespace std;
#define ll long long   
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,q; cin>>n>>q;
        vector<ll> s;
        s.push_back(0);
        for(int i = 0; i<n; i++)
        {
            ll p; cin>>p;
            s.push_back(p);
        }
        for(int i = 0; i<q; i++)
        {
            int l,r; cin>>l>>r;
            ll d = INT_MIN;
            ll temp = INT_MIN;
            for(int j = l; j<=r; j++)
            {
                if(temp < s[j])
                {
                    if(d < s[j]) d = s[j];
                    else d++;
                    temp = d-1;
                }else if(temp == s[j]){
                    temp--;
                }
            }
            cout<<d<<endl;
        }
    }
    
    return 0;
}