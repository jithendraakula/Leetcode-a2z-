class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>mp;
        unordered_set<int>mp1;
        vector<int>res;
        for(auto i:nums1){
            mp.insert(i);
        }
        for(auto i:nums2){
            mp1.insert(i);
            
        }
        for(auto i:mp1){
           if(mp.count(i)){
                res.push_back(i);
            }
        }

        return res;
    }
};