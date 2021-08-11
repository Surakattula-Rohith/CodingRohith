#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &v)
{
    int minFirst = v.at(0);
    int maxFirst = 0;
    int n = v.size();
    bool neg = false;
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) < 0)
        {
            neg = true;
        }
        if (v.at(i) > 0)
        {
            if (v.at(i) < minFirst)
            {
                minFirst = v.at(i);
            }
            if (v.at(i) > maxFirst)
            {
                maxFirst = v.at(i);
            }
        }
    }
    if ((maxFirst==(n-1)) and (minFirst==0))
    {
        // count << n  ;
        return n;
    }
    if (minFirst != 0 and neg==false)
    {
        return (minFirst - 1);
    }
    if (minFirst != 0 and neg==true)
    {
        return 1;
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v;

    return 0;
}