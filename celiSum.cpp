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
        int a, b;
        cin >> a >> b;
        int l = min(a,b) ;
        int r = max(a,b) ;
        int m = INT_MIN ;

        for(int i = l; i <= r ; i++ ){
            int c = ceil(((float)b-(float)i)/2)+ceil(((float)i-(float)a)/2) ;
            m = max(m , c) ;
        }
        cout << m << "\n" ;
        // if (b == a)
        // {
        //     cout << "0"
        //          << "\n";
        // }
        // else if (b > a)
        // {
        //     if ((a % 2 == 0 and b % 2 == 0) or (a % 2 != 0 and b % 2 != 0))
        //         cout << ceil((float)(b - a) / (float)2) + 1 << "\n";
        //     else
        //         cout << ceil((float)(b - a) / (float)2) << "\n";
            
        // }
        // else
        // {
        //     if ((a % 2 == 0 and b % 2 == 0) or (a % 2 != 0 and b % 2 != 0))
        //         cout << ceil((float)(b - a) / (float)2) + 1 << "\n";
        //     else
        //         cout << ceil((float)(b - a) / (float)2) << "\n";
        // }
    }
}