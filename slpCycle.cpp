#include <bits/stdc++.h>
using namespace std;

bool ans(queue<int> v, int l, int h)
{

    if (v.size() == 0)
    {
        return false;
    }

    int count = v.front();
    v.pop();

    h = 2 * (h - count);
    if (h <= 0)
    {
        return true;
    }
    else
    {
        ans(v, l, h);
        if (v.size() > 1)
        {
            v.pop();
            ans(v, l, h);
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int l, h;
        cin >> l >> h;
        string s;
        cin.ignore();
        cin >> s;

       
        // bool happy = false;
        queue<int> v;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else if (s[i] == '1')
            {
                v.push(count);
                count = 0;
            }
        }

        while (v.size() != 0)
        {
            cout << v.front() << " ";
            v.pop();
        }

        // bool happy = false ;
        // happy = ans(v,l,h) ;

        // if (count != 0)
        // {
        //     h = 2 * (h - count);
        //     if (h <= 0)
        //     {
        //         happy = true;
        //         break;
        //     }
        //     else
        //     {
        //         count = 0;
        //     }
        // }
        // if (happy)
        // {
        //     cout << "Yes";
        // }
        // else
        // {
        //     cout << "No";
        // }
        cout << "\n";
        cin.clear();
        cin.ignore();
    }

    return 0;
}