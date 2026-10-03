class Solution {
public:
int sos(int a){

            int sum=0;
            int digit=0;
            while(a>0){
                digit=a%10;
                a=a/10;
                sum+=digit*digit;
            }
            return sum;
        }
    bool isHappy(int n) {
        unordered_set<int>mp;
        
            if(n<=1) return true;
        
        while((!mp.count(sos(n)))and n>1){
            int next=sos(n);
            if(next<=1) return true;
            mp.insert(next);
            n=next;
            
        }
        return false;

    }
};