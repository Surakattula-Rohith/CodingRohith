#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string s = to_string(x);
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[n - i])
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    cout << s.isPalindrome(31356);

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}