/**
 * Definition for singly-linked list.
 
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode *n)
    {
        val = 0;
        next = n;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        ListNode *a = l1;
        ListNode *b = l2;
        ListNode *ans = new ListNode(0);
        int p = 0, q = 0, sum = 0;
        int carry = 0;

        ListNode *head = ans;

        while (a != NULL and b != NULL)
        {
            p = a->val;
            q = b->val;
            sum = p + q;
            if (sum / 10 != 0)
            {
                carry = sum / 10;
                sum %= 10;
            }
            ans->val += sum;

            ListNode *temp = new ListNode(carry);

            if (a->next == NULL and b->next == NULL)
            {
                if (carry == 0)
                {
                    break;
                }
            }

            if (a->next == NULL or b->next == NULL)
            {
                break;
            }

            ans->next = temp;

            ans = temp;

            sum = 0;

            a = a->next;
            b = b->next;
        }
        if (a->next != NULL)

        {
            ans->next = a->next;
            a = a->next;
            while (a->next != NULL)
            {
                int t = a->val;
                sum = t + carry;
                if (sum / 10 != 0)
                {
                    carry = sum / 10;
                }
                a->val = sum % 10;
                a = a->next;
            }
            int t = a->val;
            sum = t + carry;
            if (sum / 10 != 0)
            {
                carry = sum / 10;
            }
            a->val = sum % 10;
            if (carry != 0)
            {
                ListNode *temp = new ListNode(carry);
                a->next = temp;
            }
        }
        if (b->next != NULL)

        {
            ans->next = b->next;
            b = b->next;
            while (b->next != NULL)
            {
                int t = b->val;
                sum = t + carry;
                if (sum / 10 != 0)
                {
                    carry = sum / 10;
                }
                b->val = sum % 10;
                b = b->next;
            }
            int t = b->val;
            sum = t + carry;
            if (sum / 10 != 0)
            {
                carry = sum / 10;
            }
            b->val = sum % 10;
            if (carry != 0)
            {
                ListNode *temp = new ListNode(carry);
                b->next = temp;
            }
        }

        return head;
    }
};

int main()
{
    return 0;
}