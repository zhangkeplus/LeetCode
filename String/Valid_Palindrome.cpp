class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        int f = 0, t = len-1;
        if (len == 0 || len ==1){
            return true;
        }
        while(f < t){
            while (!( ('0' <= s[f] && s[f]<= '9')||('a' <= s[f] && s[f] <= 'z')||('A' <= s[f] && s[f] <= 'Z') )){
                f++;
                if(f==t){
                    return true;
                }
            }
            if('A' <= s[f] && s[f] <= 'Z'){
                s[f]+=32;
            }
            while (!( ('0' <= s[t] && s[t] <= '9')||('a' <= s[t] && s[t] <= 'z')||('A' <= s[t] && s[t] <= 'Z') )){
                t--;
                if(t==f){
                    return true;
                }
            }
            if('A' <= s[t] && s[t] <= 'Z'){
                s[t]+=32;
            }
            if(s[f]!=s[t]){
                return false;
            }
            f++;
            t--;
        }
        return true;
    }
};
