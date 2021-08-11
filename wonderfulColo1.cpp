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
        cin.ignore() ; 
        string s ; 
        cin >> s ;

        map<char,int> m ;
        for(int i = 0 ; i < s.length() ; i++){
            if(m.find(s[i]) == m.end()){
               m[s[i]] = 1 ;
            }else {
                 m[s[i]]++ ;
            }
        }
        int repeat = 0 , single = 0 ;
        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second == 1) single++ ;
            else if(i->second == 2) repeat++;
        }

        cout << repeat+single/2 << "\n" ;

    }
}