#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const char nl = '\n';


void fastscan(ll &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
  
    number = 0;
  
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
  
        // extract the next character from the buffer
        c = getchar();
    }
  
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
  
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;

    // delete number ;    
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    fastscan(t);
    while (t--)
    {
        ll n;
        fastscan(n);
        vector<ll> arr(n) ;
        for (int i = 0; i < n; i++)
        {
            fastscan(arr[i]) ;
        }

        ll count = 0;
        sort(arr.begin(), arr.end());

        vector<ll> temp(n, 0);
        temp[n - 1] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == arr[i - 1])
            {
                temp[i - 1] = temp[i];
            }
            else
            {
                temp[i - 1] = n - i;
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            count += temp[i];
        }

        cout << 2 * count << nl;
        

        // ll ans = 0;
    }

    return 0;
}