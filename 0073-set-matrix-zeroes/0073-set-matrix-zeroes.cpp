class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>s_i;
        unordered_set<int>s_j;
        
        int m=matrix.size();
        int n=matrix[0].size();
        // if (matrix.size()==0)
        //     return;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (matrix[i][j]==0){
                    s_i.insert(i);
                    s_j.insert(j);
                }
            }
        }
        // for(auto it:s_j)
        //     cout<<it<<" ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s_i.count(i)){
                    matrix[i][j]=0;
                }
                if(s_j.count(j)){
                    matrix[i][j]=0;
                }
            }
        }
    }
};