#include <iostream>
using namespace std;

// template <size_t n, size_t m>
bool check(int **arr,int n , int m , int k){
    bool ans = true;
    for(int i = 0 ; i < n-k ; i++){
       for(int j = 0 ; j < m-k ; j++){
            for(int f = n-k ; f < n ; f++){
                for(int p = m-k ; p < m ; p++){
                    if(arr[f][p] != 1){
                         ans = false ;
                         break ;
                    }
                }
               
            }if(ans == true)
              cout << "Alice" << endl ;  
            ans = true ;  
            for(int f = n-k ; f < n ; f++){
                for(int p = m-k ; p < m ; p++){
                    if(arr[f][p] != 2){
                         ans = false ;
                         break ;
                    }
                }
               
            }
             if(ans == true)
              cout << "Bob" << endl ; 
            
            
     } 
    }
    
}

int main() {
	
	int t ;
	cin >> t ;
	
	while(t--){
	    
	    int n , m ,k ;
	    cin >> n >> m >> k ;
	    int arr = new int [n][m] ;
	    int c = n*m ;
	    int count = 0 ;
	    bool anss = false ;
	    while(c--){
	        int a,b ;
	        cin >> a >> b ;
	        
	        if(count%2 == 0)
	              arr[a-1][b-1] = 1 ;
	        else
	            arr[a-1][b-1] = 2 ;
	       count++ ;  
	       if(anss == false){
	           anss = check(arr,n ,m ,k) ;
	       }
	        
	    }
	    // Alice = 1 
	    // Bob = 2
	    
	    if(anss == false){
	        cout << "Draw" << endl ;
	    }
	    
	    
	}
	
	
	return 0;
}
