#include <bits/stdc++.h>
#include <iostream>
class Solution
{
public:
    vector<int> increment(vector<int> arr, int n)
    {
        // code here
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += arr.at(i);
        }
        int num = std::stoi(s);
        num += 1;
        vector<int> ans;
        for (int i = 0; i < s.length(); i++)
        {
            ans.push_back(s[i]-'0');
        }
        return ans;
    }
};

int main()
{
    return 0 ;
}