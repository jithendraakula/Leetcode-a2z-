class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool res=true;
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(int i=0;i<s.size();i++){
            if(mp1.count(s[i])){
                if(mp1[s[i]]!=t[i]) res= false;
            }
            if(mp2.count(t[i])){
                if(mp2[t[i]]!=s[i]) res=false;
            }
            if(!mp1.count(s[i])){
                mp1[s[i]]=t[i];
            }
            if(!mp2.count(t[i])){
                mp2[t[i]]=s[i];
            }
           
        }
         for(auto i:mp1){
                cout<<i.first<<":"<<i.second<<" ";
            }
            cout<<"||";
            for(auto i:mp2){
                cout<<i.first<<":"<<i.second<<" ";
            }
        return res;
    }
};