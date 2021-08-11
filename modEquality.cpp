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
        bool zero = false, one = false, two = false;
        int nZero = 0, nOne = 0;
        int minNum = INT_MAX;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minNum = min(minNum, arr[i]);
            if (arr[i] == 0)
            {
                zero = true;
                nZero++;
            }
            else if (arr[i] == 1)
            {
                one = true;
                nOne++;
            }
            else if (arr[i] == 2)
                two = true;
        }

        if (zero)
        {
            cout << (n - nZero) << "\n";
        }
        else
        {
            bool h = false;
            ll k = 0;
            for (int i = 0; i < n; i++)
            {

                if (arr[i] == minNum)
                    continue;
                if ( arr[i] != minNum and (arr[i]) % minNum == 0)
                {
                    cout << n << "\n";
                    h = true;
                    break;
                }
                if ((arr[i] - minNum == 1))
                {
                    cout << n << "\n";
                    h = true;
                    break;
                }

                else if ((arr[i] - minNum != 1) and arr[i] != minNum)
                {
                    k++;
                }
            }
            if (!h)
                cout << k << "\n";
        }
    }

    return 0;
}