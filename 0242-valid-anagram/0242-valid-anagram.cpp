class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>map(26);
        vector<int>map1(26);
        if(s.size()!=t.size()) return false;
        for(auto i:s){
            map[i-'a']++;
        }
        for(auto i:t){
            map1[i-'a']++;
        }
        for(auto i:t){
            if(map[i-'a']!=map1[i-'a']){
                return false;
            }
        }
        return true;
    }
};