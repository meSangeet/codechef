#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t;
    while(t--)
    {
       ll a,b,c;
       cin>>a>>b>>c; 
       ll x = 0;
       for(; x<pow(2,30); x++)
       {
        if((b^x > a^x) && (c^x > b^x))
        {
            cout<<x<<endl;
            break;
        }
       }
       if(x == pow(2,30))
       {
        cout<<-1<<endl;
       }
    }
    
    
    return 0;
}