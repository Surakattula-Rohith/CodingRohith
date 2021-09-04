class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int n = nums.size() ;
        
        vector<int> l(n),r(n) ;
        int p = 0 ;
        for(int i = 0 ; i < n ; i++){
            
            p += nums[i] ;
            l[i] = p ;
        }
        
        int q = 0;
        for(int i = n-1 ; i>= 0 ; i--){
            q += nums[i] ; 
            r[i] = q;

        }
        
        bool h = false ;
        int ans = -1 ;
        
        for(int i = 0 ; i < n ; i ++){
            if(l[i] == r[i]) {
                h = true ;
                ans = i ;
                break;
            }
        }
        
        return ans ;
    }
};
