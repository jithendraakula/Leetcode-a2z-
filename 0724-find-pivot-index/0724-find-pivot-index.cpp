class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        vector<int>sufix;
        int n=nums.size();
        int sum=0;
        for (auto i:nums){
            sum+=i;
            prefix.push_back(sum);
            
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            sufix.push_back(sum);
            
        }
        
        reverse(sufix.begin(),sufix.end());
        
        for(int i=0;i<n;i++){
            if (prefix[i]==sufix[i]){
                return i;
            }
        }
        return -1;
    }
};