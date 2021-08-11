#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t ;
	cin >> t ;
	for(int p = 0 ; p < t ; p++){
	    int n ;
	    cin >> n ;
	    cin.ignore() ;
	    string s ;
	    getline(cin,s) ;
	    vector<int> v ;
	    
	    char first = s[0] ;
	    for(int i = 0 ; i < n ; i++){
	        if(s[i] == first)
	            v.push_back(i);
	        
	    }
	    // int lenghth = v.size() ;
	    vector<int> m ;
        m.push_back(0)
	    for(int i = 1 ; i < v.size() ; ; i++){
	        m.push_back(v.at(i) - v.at(i-1)) ;
	    }
	    int drones = 0 ;
	    int l = 0 ;
	    int k = m.at(0) ;
	    for(int i = 1 ; i < m.size() ; i++){
	        
	        if(k == m.at(i)){
	            l++ ;
	        }
	        else{
	            drones = max(drones,l) ;
	            l = 0 ;
	        }
	    }
	    	
	 drones = max(drones,l) ;	
	cout << n-drones <<endl ;
	return 0;
	    
	}

}
