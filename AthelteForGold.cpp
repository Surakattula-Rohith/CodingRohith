#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;

    string pl = "Asdfhioif" ;
    

    while (q--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            int arr[n][5];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 5; j++)
                    cin >> arr[i][j];
            }
            cout << "1\n";
        }

        else
        {
            int arr[n][5];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 5; j++)
                    cin >> arr[i][j];
            }
            bool h = false;
            int count = 0;
            int c = 0 ;

            for (int i = 0; i < n; i++)
            {
                c = 0 ;
                
                for (int k = 0; k < n; k++)
                {
                    c = 0;
                    if (i == k)
                        continue;
                    for (int j = 0; j < 5; j++)
                    {

                        if (arr[i][j] > arr[k][j])
                            c++;
                    }
                    if (c >= 3)
                    {
                        count++;
                        h = true;
                         
                    }
                    c= 0 ;
                }
            }

            if (!h)
                cout << "-1\n";
            else
                cout << count << "\n";
        }
    }

    return 0;
}