#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
     int  i ;
    
    for(i=2; i<1202; i++)
    {
        if(a%i==0)
        {
            // chk++;
            return false ;
            // break;
        }
    }return true ;
    

 }

vector<int> waiter(vector<int> number, int q) {
    
    vector<int> prime ;
    int num = q ;
    vector<int> ans ;
    int p = 2 ;
    while(num > 0 ){
        if(isPrime(p)){
            prime.push_back(p) ;
        }p++ ;
        num-- ;
    }
    int n = number.size() ;
    stack<int> A;
    stack<int> B;
    
    
    // int ss = prime.size() ;
    while(q>0){
        
        int check = prime.front();
        prime.erase(prime.begin()) ;
        
        for(int i = 0 ; i < n ; i++){
            if(number.at(i)%check == 0){
                B.push(number.at(i)) ;
                number.erase(prime.begin()+i);
                n = n-1;
                i = i-1 ;
                
            }else{
                A.push(number.at(i)) ;
               
            }
        }
        
        while(!B.empty()){
            int a = B.top() ;
            // Remove(a,*prime) ;
            int s = ans.size() ;
            ans.insert(ans.begin(),s,a);
            B.pop() ;
        }
        
        
        
        q-- ;
    }
    
    return ans ;
}

int main(){


    vector<int> v ;
    v.push_back(3) ;
    v.push_back(3) ;
    v.push_back(4) ;
    v.push_back(4) ;
    v.push_back(9) ;

    int q = 2 ;

    vector<int> a = waiter(v,q) ;

    for(int i = 0  ; i < a.size() ; i++ ){
        cout << a.at(i) ; 
    }


    return 0 ;
}