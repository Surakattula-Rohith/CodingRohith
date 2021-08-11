#include <bits/stdc++.h>
// # include <algorithm>
using namespace std;

void fun(int n)

{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p = 3*n;

        unordered_set<string> tom;
        unordered_map<string, int> ans;

        while (p--)
        {
            string s;
            int i;
            cin.ignore();
            cin >> s;
            cin.ignore();
            cin >> i;
            if (tom.find(s) == tom.end())
            {
                tom.insert(s);
                ans[s] = i;
            }
            else
            {
                ans[s] += i;
            }
        }
        unordered_map<string, int>::iterator itr;
        vector<int> v ;
        for (itr = ans.begin(); itr != ans.end(); itr++)
        {

            v.push_back(itr->second) ;
        }
        sort(v.begin(), v.end());
        for(int i = 0 ; i < v.size() ; i++){
            cout << v.at(i) << " " ;
        }cout << "\n" ;
}

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

        fun(n) ;
        // fun(n) ;
        // fun(n) ;
        
        
    }

    return 0;
}