#include <bits/stdc++.h>
using namespace std;

class Solution
{
    
public:
    vector<int> twoSum(vector<int> &v, int target)
    {
        vector<int> ans;

        map<int, int> s;
        if (target % 2 != 0)
        {
            for (int i = 0; i < v.size(); i++)
            {

                if (s.find(v.at(i)) == s.end())
                {
                    s[v.at(i)] = i;
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                if (s.find(target - v.at(i)) != s.end())
                {
                    ans.push_back(s[v.at(i)]);
                    ans.push_back(s[target - v.at(i)]);
                }
            }
            return ans;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if ((v.at(i) == target / 2) and (ans.size() != 0) and (s.find(target / 2) != s.end()))
                {
                    ans.push_back(s[v.at(i)]);
                    ans.push_back(s[target / 2]);
                    return ans;
                }
                if (s.find(v.at(i)) == s.end())
                {
                    s[v.at(i)] = i;
                }
            }

            if (s.find(target / 2) != s.end())
            {
                s.erase(s.find(target / 2));
            }
            for (int i = 0; i < v.size(); i++)
            {
                if (s.find(target - v.at(i)) != s.end())
                {
                    ans.push_back(s[v.at(i)]);
                    ans.push_back(s[target - v.at(i)]);
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}