class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numb;
        for(auto it:nums){
            numb.insert(it);
        }
        int l=0;
        int curr=0;
        for(auto it:numb){
            int c=it;
            if(!numb.count(c-1)){
                while(numb.count(c++)){
                    curr++;
                }
                l=max(l,curr);
                curr=0;
            }
        }
        return l;


    }
};