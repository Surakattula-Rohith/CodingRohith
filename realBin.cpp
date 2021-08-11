#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {

    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    
    int t ;
    cin >> t ;
    
    while(t--){
        ll a , b ;
        cin >> a >> b ;
        
        cout<< ((b&(b-1)) ? "No" : "Yes" )<< "\n" ;
    }
	
	return 0;
}
