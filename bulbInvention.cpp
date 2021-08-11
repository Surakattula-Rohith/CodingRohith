#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x;
        cin >> n >> p >> x;
        int ans = 0;

        int q = p % x;
        q--;

        int s = ((n - 1) / x) * x;
        s = n - 1 - s;

        if (q > s)
        {
            ans += (s + 1) * ((n - 1) / x + 1) + (q - s) * ((n - 1) / x);
        }
        else
        {
            ans = ((n - 1) / x + 1) * (q + 1);
        }

        for (int i = q + 1; i < n; i += x)
        {
            ans++;
            if (i == p)
            {
                cout << ans << "\n";
                break;
            }
        }
    }
    return 0;
}