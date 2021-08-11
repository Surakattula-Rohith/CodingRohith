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
        int n;
        int count = 0;
        cin >> n;

        for (int c = 1; c <= n; c++)
        {
            for (int b = c; b <= n; b += c)
            {
                if (b % c == 0)
                {
                    for (int a = c; a <= n; a += b)
                    {
                        if (a % b == c)
                        {
                            count++;
                        }
                    }
                }
            }
        }

        cout << count << "nl";
    }

    return 0;
}