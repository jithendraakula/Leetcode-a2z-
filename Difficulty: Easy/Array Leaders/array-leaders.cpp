class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>res;
        int prev=INT_MIN;
        for(int i=n-1;i>=0;i--){
            prev=max(prev,arr[i]);
            if(arr[i]==prev)
                res.push_back(arr[i]);
            
            
            
        }
        vector<int>result;
        for(int i=res.size()-1;i>=0;i--)
            result.push_back(res[i]);
        return result;
    }
};