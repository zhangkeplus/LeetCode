class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n == 0){
            return 0;
        }
        int current = 0;
        int next = 1;
        while(next < n){
            if(A[current] != A[next]){
                A[++current] = A[next];
            }
            next++;
        }
        return current+1;
    }
};
