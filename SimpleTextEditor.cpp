#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string ans = "";
    stack<string> st;

    int q;
    cin >> q;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            string s;
            cin >> s;
            st.push(ans);
            ans += s;
        }
        else if (op == 2)
        {
            int k;
            cin >> k;
            st.push(ans);
            ans.erase(ans.size() - k);
        }
        else if (op == 3)
        {
            int k;
            cin >> k;
            cout << ans[k - 1] << "\n";
        }
        else
        {
            if (!st.empty())
            {
                ans = st.top();
                st.pop();
            }
        }
    }

    return 0;
}