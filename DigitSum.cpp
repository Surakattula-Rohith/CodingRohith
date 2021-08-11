#include <bits/stdc++.h>
using namespace std;
#define ll int

map<ll,ll> s ;

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
        
        if(n <8){
            cout << "0" << "\n" ;
        }else{
            cout << (n+1)/10 << "\n" ;
        }

    }
}