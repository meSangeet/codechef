#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, q;
        cin >> n >> p >> q;
        string s;
        cin >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i] - 'a' + 1;
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] > 13) && (arr[i] + p > 26) && (p > 0))
            {
                p -= (25 - arr[i]);
                arr[i] = 1;
                s[i] = 'a';
                continue;
            }
            if ((arr[i] > 13) && (q > 0))
            {
                if (q >= arr[i])
                {
                    q = q - arr[i] + 1;
                    s[i] = 'a';
                }
                else if (q < arr[i])
                {

                    arr[i] = arr[i] - q;
                    q = 0;
                    s[i] = 'a' + arr[i] - 1;
                }
                continue;
            }
            if ((arr[i] <= 13) && (arr[i] - q < 2) && (q > 0))
            {
                q = (q - arr[i] + 1);
                arr[i] = 1;
                s[i] = 'a';
                continue;
            }
            if ((arr[i] <= 13))
            {
                if (p >= (26 - arr[i] + 1) && (p > 0))
                {
                    p -= (26 - arr[i] + 1);
                    s[i] = 'a';
                }
                else if (p < (26 - arr[i] + 1) && (q>0))
                {

                    if (q >= arr[i])
                    {
                        q = q - arr[i] + 1;
                        s[i] = 'a';
                    }
                    else if (q < arr[i])
                    {

                        arr[i] = arr[i] - q;
                        q = 0;
                        s[i] = 'a' + arr[i] - 1;
                    }
                }
                continue;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}