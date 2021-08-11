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
        int r1=0,w1=0,c1=0, r2=0,w2=0,c2=0 ;
        int a = 0 , b = 0 ;
        cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2 ;

        if(r1>r2) a++ ;
        else b++  ;

        if(c1>c2) a++ ;
        else b++  ;

        if(w1>w2) a++ ;
        else b++  ;

        if(a>b) cout << "A" << "\n" ;
        else cout << "B" << "\n" ;


    }


    return  0 ;
}