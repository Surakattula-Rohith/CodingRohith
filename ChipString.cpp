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
        cin.ignore();
        string s, t;
        cin >> s >> t;
        
        bool h = true;

        for (int i = 0; i < t.length()-1; i++)
        {

            if (s.find(t.substr(0, i + 1)) and (s.find(t.substr(0, i + 2)) == -1))
            {
                int ff = s.find(t.substr(0, i + 1))+ i ;
                cout << ff << " " << i+1 << endl
                for(int p = ff-1, q=i+1 ; p < s.length() and q>=0 ; p--,q++){
                    if(s[p] != t[q]){
                        h = false ;
                        break ;
                    }
                }
                // temp1 = t.substr(0, i + 1);
                // for (int j = t.length(); j > i; j--)
                // {
                //     temp2 += t[j];
                // }

                break;
            }
        }

        if(h){
            cout << "YES" << "\n" ;
        }else{
            cout << "NO" << "\n" ;
        }
    }
}