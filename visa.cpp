#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t ;
	cin >> t ;
	while(t>0){
	    int x1,x2,y1,y2,z1,z2 ;
	    cin >> x1 >> x2 >> y1>> y2 >> z1 >> z2 ;

	    if(x2>=x1){
            if(y2>=y1){
                if(z1>=z2)
                    cout <<  "YES" << endl ;
	            else
	               cout << "NO" << endl ;
                
            }else
	               cout << "NO" << endl ;
        }else
	               cout << "NO" << endl ;
       
	    cin.clear ();   
    cin.ignore (); 
	    t-- ;
	}
	
	return 0;
}