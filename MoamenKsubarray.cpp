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
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // n=5 k=4
        // 6 3 4 2 1

        int j = 0;
        bool Ktrue = false;

        while (j < k)
        {
            for (int p = j; p <= (n - k) + j; p++)
            {

                if (p == n - k + j)
                {
                    Ktrue = true;
                    break;
                }
                else if (arr[p] > arr[p + 1])
                {
                    j = p + 1;
                    break;
                }
                // j++;
            }

            if (Ktrue)
                break;
        }

        if (Ktrue)
            cout << "Yes"
                 << "\n";
        else
        {
            cout << "No"
                 << "\n";
        }
    }
    return 0;
}