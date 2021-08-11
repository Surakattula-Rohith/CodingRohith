#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxM = INT_MIN;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxM = max(maxM, x);
            sum += x;
        }

        double p = ((double)sum - (double)maxM) / (double)(n - 1);

        cout << fixed << setprecision(8) << ((double)maxM + p) << "\n";
    }
    return 0;
}