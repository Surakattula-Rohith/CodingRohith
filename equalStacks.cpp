#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    stack<int> st1, st2, st3;

    int temp;

    int i = n1;
    while (i--)
    {
        cin >> temp;
        st1.push(temp);
    }
    int j = n2;
    while (j--)
    {
        cin >> temp;
        st2.push(temp);
    }
    int k = n3;
    while (k--)
    {
        cin >> temp;
        st3.push(temp);
    }
    cin.ignore() ;
    cin.clear() ;

    set<ll> ss1, ss2, ss3;

    
    ll before = 0  ;
    while (!st1.empty())
    {
        before += st1.top();
        ss1.insert(before);

        st1.pop();
    }
    before = 0;
    while (!st2.empty())
    {
        before += st2.top();
        ss2.insert(before);

        st2.pop();
    }
    before = 0;
    while (!st3.empty())
    {
        before += st3.top();
        ss3.insert(before);
        st3.pop();
    }
    vector<ll> v;
    for (std::set<ll>::iterator it = ss2.begin(); it != ss2.end(); ++it)
    {
        if (ss2.find(*it) != ss2.end())
            if (ss3.find(*it) != ss3.end())
            {
                v.push_back(*it);
            }
    }
    
    if (v.size() != 0)
    {   sort(v.begin(),v.end()) ;
        cout << v.at(v.size()-1);
    }
    else
    {
        cout << "0";
    }
    cout << "\n";

    return 0;
}

// 5 3 4
// 3 2 1 1 1
// 4 3 2
// 1 1 4 1

// 
