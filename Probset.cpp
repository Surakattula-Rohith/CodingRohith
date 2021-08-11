#include <bits/stdc++.h>
using namespace std;

// #define ll long long int

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
       vector<int> arr(4) ;
       for(int i = 0 ; i < 4 ; i ++){
        //    int x ; 
           cin >> arr[i] ;

       }

       sort(arr.begin() , arr.end()) ;

       if(arr[0] == arr[1] and arr[1]==arr[2] and arr[2]== arr[3]){
           cout << "0" << "\n" ;
       }else if((arr[0] == arr[1] and arr[1]==arr[2])or (arr[1]==arr[2] and arr[2]== arr[3])){
           cout << "1" << "\n" ;
       }else{
           cout << "2" << "\n" ;
       }
    }
    return 0
}