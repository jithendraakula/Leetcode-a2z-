class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0;
        int o=0;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                z++;
            }
            if (nums[i]==1)
                o++;
            if(nums[i]==2)
                t++;
        }
        int key=0;
        while(z--){
            nums[key++]=0;
        }
        while(o--){
            nums[key++]=1;
        }
        while(t--)
            nums[key++]=2;
    }
};