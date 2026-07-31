class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max1=INT_MIN;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
        
            sum+=nums[i];
            max1=max(max1,sum);
            if (sum<0)
                sum=0;   
                
            
            
        }
        return max1;
    }
};