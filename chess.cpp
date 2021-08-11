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
        int a ,b ; 
        cin >> a >> b ;
        int p = a+b ;

        if(p<3){
            cout << "1" <<"\n" ;
        }else if(p <= 10){
            cout << "2" <<"\n" ;
        }else if(p <= 60){
            cout << "3" <<"\n" ;
        }else{
            cout << "4" << "\n" ;
        }
    }

    return 0 ;
}