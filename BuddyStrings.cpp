#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        if (s.length() != goal.length())
        {
            return false;
        }
        else
        {
            
            char one, two;
            int count = 2;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != goal[i] and count == 2)
                {
                    one = s[i];
                    two = goal[i];
                    count = 1;
                }
                else if (s[i] != goal[i] and count == 1)
                {
                    if (s[i] == two and goal[i] == one)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            return false;
        }
    }
};
int main()
{
    Solution s;
    cout << s.buddyStrings("ab", "ba");

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}