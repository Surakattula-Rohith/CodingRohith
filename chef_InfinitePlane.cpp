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
        cin >> n;
        unordered_map<int, int> s;

        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (s.find(temp) == s.end())
            {
                s[temp] = 1;
            }
            else
            {
                s[temp]++;
            }
        }
        int count = 0;
        for (unordered_map<int, int>::iterator it = s.begin(); it != s.end(); it++)
        {
            if ((it->second) < (it->first))
                count += (it->second);
            else
                count += ((it->first) - 1);
            // cout << it->first << " " << it->second << "\n" ;
        }
        cout << count << "\n";
        // cout << endl ;
    }
    return 0;
}