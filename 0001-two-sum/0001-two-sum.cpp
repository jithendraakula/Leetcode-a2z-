class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int comp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            comp=target-nums[i];
            
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i};
            }
            if(mp.find(comp)==mp.end())
                mp[nums[i]]=i;
        }
        return {};
    }
};