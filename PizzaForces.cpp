#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define endl ("\n")
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//oset<int>s:s.find_by_order(k):Kth element in "s",s.order_of_key(k):Number of item strictly lessthan k
// template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
 
int32_t main(){
    fastio
    //cout<<setprecision(20)<<fixed ;
    int t=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int ans = max((n+1)/2 *5 , 15LL);
        cout<<ans<<endl;
    }
    return 0;
}