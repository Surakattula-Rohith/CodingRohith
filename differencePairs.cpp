#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      
      vector<int> v = nums ;
      sort(v.begin(),v.end()) ;
      int n = v.size() ;
      return ((v.at(0)*v.at(1))-(v.at(n-1)*(v.at(n-2)))) ;

      return 0 ;
        
    }
};