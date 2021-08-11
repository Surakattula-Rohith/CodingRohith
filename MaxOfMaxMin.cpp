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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;

        // int M[n] ;
        // int m[n] ;

        // m[0] = arr[0] ;
        // M[0] = arr[0] ;

        // for(int i = 0 ; i < n ; i++){
        //     M[i] = max(M[i],arr[i]) ;
        //     m[i] = min(m[i],arr[i]) ;

        // }

        // 381274500335
        // 1898370110
        for (int i = 0; i < n; i++)
        {
            ll MM = arr[i], mm = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > MM)
                    MM = arr[j];
                if (arr[j] < mm)
                    mm = arr[j];

                // if(MM != mm)
                if (ans < MM * mm)
                {
                    ans = MM * mm;
                    cout << i << " " << j << " " << ans <<"\n";
                }
                // ans = max(MM*mm,ans) ;
            }
        }

        // cout << ans << "\n";
    }
    return 0;
}