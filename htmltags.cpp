#include <iostream>
using namespace std;

int main() {
    
    // '9'
	
    int t ; 
    cin >> t ;

    while(t--){
        string s ;
        cin >> s ;
        bool ans = true ;
        if(s.size() <= 3){
            ans = false ;
        }
        if((s[0] != '<') ||(s[1] != '/') || (s[s.size()-1] != '>')){
            ans = false ;
        }
        for(int i = 2 ; i < s.size()-1 ; i++){
            if( (s[i]=='/') ||
                (s[i]=='<') ||
                (s[i]=='>') ){
                    ans = false ;
                    break ; ;
                }
        }
        if(ans == true)
             cout << "Success" << endl ;
        else
             cout << "Error" << endl ;  
        cin.clear() ;  
        cin.ignore() ;

    }
	return 0;
}
