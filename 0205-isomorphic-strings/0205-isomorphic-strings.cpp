class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool res=true;
        unordered_map<char,vector<int>>mp1;
        unordered_map<char,vector<int>>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]].push_back(i);
            mp2[t[i]].push_back(i);
        }
        // for(auto i:mp1){
        //    cout<<i.first<<" :";
        //    for(auto j:i.second){
        //     cout<<j<<" ";
        //    }
        // }
        // cout<<"||";
        // for(auto i:mp2){
        //    cout<<i.first<<" :";
        //    for(auto j:i.second){
        //     cout<<j<<" ";
        //    }
        // }

        for(int i=0;i<s.size();i++){
            if(mp1[s[i]] != mp2[t[i]]) res=false;
        }
        
        return res;
    }
};