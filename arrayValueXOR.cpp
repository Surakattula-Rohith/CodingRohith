#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;

    while (q--)
    {
        ll n, k;
        cin >> n >> k;

        if (k == 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            if (n == 1)
            {
                cout << "2"
                     << "\n";
            }
            else
            {
                ll temp = pow(2, n);
                temp -= 1;

                if (k > pow(2, n - 1))
                {
                    k = pow(2, n - 1);
                }

                cout << (ll)((ll)temp*(ll)k ) ;

            }
        }
    }

    return 0;
}