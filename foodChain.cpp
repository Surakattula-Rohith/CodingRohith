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
        int e , k ;
        cin >> e >> k ;
        int c = 0 ;
        while(e > 0){
            c++ ;
            e /= k ;
        }

        cout << c << "\n" ;
    }
}