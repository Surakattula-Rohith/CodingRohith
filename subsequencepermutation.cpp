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
        string s;
        cin >> n;
        cin.ignore();
        cin >> s;

        string m = s;
        sort(m.begin(), m.end());

        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != m[i])
                c++;
        }

        cout << c << "\n" ;
    }
}