class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        vector<bool> ans();
        for (int i = 0; i < l.size(); i++)
        {
            vector<int> temp;
            for (int k = l[i]; k < r[i]; k++)
            {
                temp.push_back(nums[k]);
            }
            if (temp.size() == 1 or temp.size() == 2)
            {
                ans.push_back(true);
            }
            else
            {
                sort(temp.begin(), temp.end());
                int dif = temp[1] - temp[0];
                for (int i = 1; i < temp.size(); i++)
                {
                    if (temp[i] - temp[i - 1] != dif)
                    {
                        ans.push_back(false);
                        break;
                    }
                }
                ans.push_back(true);
            }
            return ans;
        }
    }
};