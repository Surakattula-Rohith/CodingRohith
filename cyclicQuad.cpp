#include <bits/stdc++.h>
// # include <algorithm>
using namespace std;



int main(){

    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;

    //  cout<< "Yes" << "\n" ;

    int t ; 
    cin >> t ;
    while(t--){
       int a , b , c ,d ;
       cin >> a >> b >> c >> d ;

       cin.ignore();
       cin.clear() ;

       int p = a+c ;
       int q = b+d ;
       
       if(p == q) {
           if(p = 180){
               cout<< "Yes" << "\n" ;
           }else{
               cout<< "No" << "\n" ;
           }
       }else{
           cout<< "No" << "\n" ;
       }

    }
   
    return 0 ;

}