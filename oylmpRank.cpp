#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <iomanip>
#include <utility>
#include <functional>

using namespace std;

//Macros
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef complex<ld> cd;
typedef string str;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;
typedef vector<cd> vcd;
typedef vector<str> vs;
typedef vector<char> vc;
typedef vector<bool> vb;

template <class T>
using pq = priority_queue<T>;
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;

template <class T>
bool ckmin(T &a, const T &b)
{
    return b < a ? a = b, 1 : 0;
}
template <class T>
bool ckmax(T &a, const T &b)
{
    return a < b ? a = b, 1 : 0;
}

#define pb push_back
#define pf push_front
#define eb emplace_back
#define ef emplace_front
#define lb lower_bound
#define ub upper_bound
#define rsz resize
#define ins insert
#define ft front
#define bk back
#define fi first
#define se second

#define loop(i, n) for (int i = 0; i < (int)n; ++i)
#define each(a, x) for (auto &a : x)
#define accum(a, x) accumulate(all(a), x)
#define maxe(a) *max_element(all(a))
#define mine(a) *min_element(all(a))
#define sz(a) (int)(a.size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsor(x) sort(rall(x))


//IO
template <class H, class T>
void read(pair<H, T> &p);
template <class T>
void read(vector<T> &v);
template <class T>
void read(T &t)
{
    cin >> t;
}
template <class H, class... T>
void read(H &h, T &...t)
{
    read(h);
    read(t...);
}
template <class T>
void read(vector<T> &v)
{
    for (auto &t : v)
        read(t);
}
template <class H, class T>
void read(pair<H, T> &p)
{
    read(p.fi, p.se);
}
void setIn(str s)
{
    freopen(s.c_str(), "r", stdin);
}
void setOut(str s)
{
    freopen(s.c_str(), "w", stdout);
}
void setIO(str s = "")
{
    cin.tie(0)->sync_with_stdio(0);
    if (sz(s))
        setIn(s + ".in"), setOut(s + ".out");
}

//Debug
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
void __print(cd x) { cerr << x; }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
template <class H, class... T>
void dbg(H &h, T &...t)
{
    dbg(h);
    dbg(t...);
}

#ifdef LOCAL
#define dbg(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define dbg(x...)
#endif

//Constants
const ll MOD = 1'000'000'007;
const ll MOD2 = 998'244'353;
const int INF = (int)1e9;
const ll LINF = (ll)1e18;
const ld PI = acos((ld)-1.0);
const ld EPS = (ld)1e-9;
const char nl = '\n';

//Math
ll modpow(ll n, ll p, ll m = MOD)
{
    ll res = 1;
    while (p)
    {
        if (p & 1)
            res = res * n % m;
        n = n * n % m;
        p >>= 1;
    }
    return res;
}
ll modinv(ll n, ll m = MOD)
{
    return modpow(n, m - 2, m);
}
ll pow2(ll p)
{
    return (1ll << p);
}
int popcnt(ll n)
{
    return __builtin_popcountll(n);
}
int clz(ll n)
{
    return __builtin_clzll(n);
}
int ctz(ll n)
{
    return __builtin_ctzll(n);
}

const int MAXN = (int)3e5 + 7;

//Code
void solve()
{
    int a,b,c , p,q,r ;
    cin >> a >> b >> c >> p >> q >> r ;
    int n = 0 , m = 0 ;
    if(a>p){
        m++ ;
    }else{
        n++;
    }if(b>q){
        m++ ;
    }else{
        n++;
    }if(c>r){
        m++ ;
    }else{
        n++;
    }

    if(m > n ){
        cout << "1" << nl ;
    }else {
        cout << "2" << nl ;
    }
}
int main()
{
    setIO();
    int t = 1;
    read(t);
    while (t--)
    {
#ifdef LOCAL
        cout << nl;
#endif
        solve();
    }
    return 0;
}