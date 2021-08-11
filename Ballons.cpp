#include <iostream>

using namespace std;

bool isTrue(bool arr[]);

    bool isTrue(bool arr[]){
	        for(int i = 0 ; i < 7 ; i++ ){
	            if(arr[i] == false)
	                return false;
	        }return true ;
	    }
	

int main() {
	// your code goes here

    
	int t ;
	cin >> t ;
	while(t>0){
	    
	    int n ; 
	    cin >> n ; 
	    int a[n] ;
		

	    bool check[] = {false,false,false,false,false,false,false} ;
	    
	    for(int i = 0 ; i < n ; i++){
	        cin >> a[i] ;
	        
	        if(a[i] == 1){
	            check[0] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 2){
	            check[1] = true ;
               if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 3){
	            check[2] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 4){
	            check[3] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 5){
	            check[4] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 6){
	            check[5] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        if(a[i] == 7){
	            check[6] = true ;
                if(isTrue(check)){
                     cout << i+1 << endl ;
                     break ;}
	        }
	        
	    }     
	    cin.clear ();   
        cin.ignore (); 
	    t-- ;
	}
	
	return 0;
}
