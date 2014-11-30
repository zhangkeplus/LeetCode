class Solution {
public:
    int numTrees(int n) {
        if(n == 0){
            return 1;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        if(n == 3){
            return 5;
        }
        int r = 0;
        for(int i = 0; i < n; i++){
            r += numTrees(i)*numTrees(n-1-i);
        }
        return r;
    }
};
