#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int z = 0, p = 0;

        if (a == 1)
        {
            p++;
        }
        else
        {
            z++;
        }
        if (b == 1)
        {
            p++;
        }
        else
        {
            z++;
        }
        if (c == 1)
        {
            p++;
        }
        else
        {
            z++;
        }

        if (z > 0 and p > 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
    return 0;
}