class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        vector<int>res;
        for(auto i:nums1){
            mp[i]++;
        }
        for(auto i:nums2){
            mp1[i]++;
            
        }
        for(auto i:mp1){
           if(mp.count(i.first)){
                res.push_back(i.first);
            } 
        }

        return res;
    }
};