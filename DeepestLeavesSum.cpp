/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deepestLeavesSum(TreeNode *root)
    {
        queue<TreeNode *> q;
        set<int> hh ;
        
        int min1 = INT_MIN ;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            if (q.front() == NULL)
            {
                q.pop();
                q.push(NULL);
            }
            else
            {
                if ((q.front())->left != NULL)
                    q.push((q.front())->left);
                if ((q.front())->left != NULL)
                    q.push((q.front())->right);
                q.pop();
            }
        }

        int klp = __gcd(1,30) ;
        return 0;
    }
};