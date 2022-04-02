#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define nl "\n"
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define all(n) n.begin(), n.end()
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define bitc(n) __builtin_popcount(n)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define iter(container, it) for (__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define logarr(arr, a, b)            \
    for (int z = (a); z <= (b); z++) \
        cout << (arr[z]) << " ";     \
    cout << endl;
template <typename T>
T gcd(T a, T b)
{
    if (a % b)
        return gcd(b, a % b);
    return b;
}
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
vs tokenizer(string str, char ch)
{
    std::istringstream var((str));
    vs v;
    string t;
    while (getline((var), t, (ch)))
    {
        v.pb(t);
    }
    return v;
}

void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

string add(string s1, string s2, int z)
{
    if (s1.size() == 0)
        return s2;

    string temp = "";
    while (z--)
        s2.push_back('0');

    // reverse(s1.begin(), s1.end());
    // reverse(s2.begin(), s2.end());

    // cout << nl << s1 << " " << s2 << nl << nl;

    int n = s1.size() - 1;
    int m = s2.size() - 1;

    int mul = 0, rem = 0, car = 0;

    while (n >= 0 and m >= 0)
    {

        int b = s2[m] - '0';
        int a = s1[n] - '0';

        mul = a + b + car;
        rem = mul % 10;
        car = mul / 10;
        char ch = '0' + rem;
        // cout << ch << " " << rem << " " << car << nl << nl;
        temp.push_back(ch);
        n--;
        m--;
    }

    while (n >= 0)
    {
        int a = s1[n] - '0';

        mul = a + car;
        rem = mul % 10;
        car = mul / 10;
        char ch = '0' + rem;
        temp.push_back(ch);
        n--;
        // m-- ;
    }

    while (m >= 0)
    {
        int a = s2[m] - '0';

        mul = a + car;
        rem = mul % 10;
        car = mul / 10;
        char ch = '0' + rem;
        temp.push_back(ch);
        m--;
        // m-- ;
    }

    if (car != 0)
    {
        char ch = '0' + car;
        temp.push_back(ch);
    }

    reverse(temp.begin(), temp.end());

    // cout << "add value is :" << temp << nl << nl;

    return temp;
}

string multiply(string num1, string num2)
{

    string ans = "", temp = "";
    int n = num1.size() - 1;

    int m = num2.size() - 1;

    if (m > n)
    {
        string tt = num1;
        num1 = num2;
        num2 = tt;
        n = num1.size() - 1;
        m = num2.size() - 1;
    }

    int sto = m;

    int mul = 0, rem = 0, car = 0;

    for (int i = m; i >= 0; i--)
    {

        int b = num2[i] - '0';
        n = num1.size() - 1;
        while (n >= 0)
        {
            int a = num1[n] - '0';
            mul = a * b + car;
            rem = mul % 10;
            car = mul / 10;
            char ch = '0' + rem;
            temp.push_back(ch);
            // cout << "a " << a << " b " << b << " mul " << mul << " rem " << rem << " car " << car << " n " << n << nl;
            n--;
        }

        if (car != 0)
        {
            char ch = '0' + car;
            temp.push_back(ch);
        }
        reverse(temp.begin(), temp.end());
        // cout << "temp is " << temp << nl;
        int zero = sto - i;
        // cout << nl << "zero value : " << zero << nl;
        ans = add(ans, temp, zero);
        // cout << "Ans is  " << ans << nl;

        temp = "";
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
    string s1, s2;
    cin >> s1 >> s2;
    cout << multiply(s1, s2) << nl;

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}