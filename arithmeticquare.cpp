#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int ff = 1;ff <= t; ff++)
    {
        int a, b, c, d, f, g, h, i;
        cin >> a >> b >> c >> d >> f >> g >> h >> i;

        int count = 0;
        if (a + c == 2 * b)
            count++;
        if (a + g == 2 * d)
            count++;
        if (i + c == 2 * f)
            count++;
        if (g + i == 2 * h)
            count++;

        map<int, int> s;
        if ((a + i) % 2 == 0)
        {
            if (s.find(a + i) == s.end())

                s[a + i] = 1;

            else

                s[a + i]++;
        }
        if ((b + h) % 2 == 0)
        {
            if (s.find(b + h) == s.end())

                s[h + b] = 1;

            else

                s[b + h]++;
        }
        if ((g + c) % 2 == 0)
        {
            if (s.find(g + c) == s.end())

                s[c + g] = 1;

            else

                s[c + g]++;
        }
        if((f+d)%2==0){
            if (s.find(d + f) == s.end())

                s[d + f] = 1;

            else

                s[d + f]++;
            
        }
        int num= 0 ;
        for (auto itr = s.begin() ; itr != s.end(); itr++)
        {
            num = max(num, itr->second);
        }

        count += num ;

        cout << "Case #"<< ff << ": " << count <<"\n" ;
    }
}