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
        int n;
        cin >> n;
        if (n < 3)
        {
            if (n == 1)
                cout << "1"
                     << " 0"
                     << "\n";
            else if (n == 2)
                cout << "0"
                     << " 1"
                     << "\n";
        }
        else
        {
            if (n % 3 == 0)
            {
                int a = n / 3;
                cout << a << " " << a << "\n";
            }
            else if (n % 3 == 1)
            {
                int a = n / 3;
                cout << a + 1 << " " << a << "\n";
            }
            else if (n % 3 == 2)
            {
                int a = n / 3;
                cout << a << " " << a + 1 << "\n";
            }
        }
    }
}