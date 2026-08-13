class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=1;
        unordered_set<int>st;
        if(nums.size()==0)
        return 0;
        for(auto i : nums){
            st.insert(i);
        }
        for(auto i :st){
            if (st.find(i-1)==st.end()){
                int cnt=1;
                int x=i;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                longest=max(cnt,longest);

            }
        }
        return longest;
    }
};