class Solution {
public:
    int singleNumber(int A[], int n) {
        int temp = 0;
        for(int i = 0; i < n; i++){
            temp = temp ^ A[i];
        }
        return temp;
    }
};
