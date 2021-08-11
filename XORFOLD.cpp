#include <iostream>
using namespace std;

int main() {
	
	int t ; 
	cin >> t ;
	while(t > 0){
	    
	    int n , m ;
	    cin >> n >> m ;
	    
	    int arr[n][m] ;
	    int ans = 0 ;
	    
	    for(int i = 0 ; i < n ; i++){
	        string s ;
	        cin >> s ;
	        
	        for(int j = 0 ; j < m ; j++){
	            arr[i][j] = s[j] ;
	            ans = ans^arr[i][j] ;
	        }
	        
	    }
	    if(ans == 1){
	        cout << "YES" << endl ;
	    }else{
	        cout << "NO" << endl ;
	    }
	    
	    
	    cin.clear ();   
        cin.ignore (); 
	    t-- ;
	}return 0 ;
}

