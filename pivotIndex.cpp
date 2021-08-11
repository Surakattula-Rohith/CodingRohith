#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> left, right;
        int n = nums.size();
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            left.push_back(nums[i] + l);
            l = nums[i];
        }
        for (int j = n - 1; j >= 0; j--)
        {
            right.push_back(nums[j] + r);
            r = nums[j];
        }
        for (int k = 0; k < n; k++)
        {
            if (left[k] > (right[n-1-k]-nums[k]))
            {
                return k;
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}