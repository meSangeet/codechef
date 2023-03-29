#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int sum;
        int n,a,b; cin>>n>>a>>b;
        if(n%2 == 0)
        {
            sum = (n/2)*a + (n/2)*b;
        }else{
            sum = (n/2)*a + (n/2)*b + a;
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}