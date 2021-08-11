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
        double x = 0, y = 0;

        cin >> x;
        setprecision(7);
        cin >> y;
        setprecision(7);
        double p = ((double)6 - ((double)x + (double)y));

        cout << fixed << setprecision(7);
        if (p <= 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            p = p / 6;
            double k = p * (1000000);
            int n = floor(k);
            double kk = (double)n / (double)1000000;
            cout << setprecision(6) << kk << "\n";
        }
    }
    return 0;
}