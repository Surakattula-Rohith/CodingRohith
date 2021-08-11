#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> index ;
        unordered_map<string,int> visit ;

        vector<string> ans ;
        for(int i = 0 ; i < list1.size() ; i++){
            index[list1.at(i)]=i;

        }
        int minIndex = 1001 ;
        for(int i = 0 ; i < list2.size() ; i++){
            if(index.find(list2.at(i)) != index.end()){
                // index[list2.at(i)] += i;
                // minIndex = min(minIndex,index[list2.at(i)]) ;
                visit[list2.at(i)] = index[list2.at(i)] + i ;
                minIndex = min(minIndex,visit[list2.at(i)]) ;

            }
        }
        for(auto it=visit.begin() ; it != visit.end() ; it++){
            if(it->second == minIndex){
                ans.push_back(it->first);
            }
        }

        return ans ;
        
    }
};

int main(){


    return 0 ;
}