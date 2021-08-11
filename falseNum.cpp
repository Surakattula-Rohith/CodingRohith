#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t; 
    cin >> t ;
    while(t--){

        string s ;
        cin >>s ;

        int n = s.size() ;
        if(s[0] == '1'){
            cout << s[0] << "0" + s.substr(1,n)  << endl;
        }else{
            cout << "1" + s << endl ;
        }
    }
	return 0;
}
