class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int index_new = 0;
        int index_old = 0;
        while(index_old < n){
            if(A[index_old] != elem){
                A[index_new] = A[index_old];
                index_new++;
            }
            index_old++;
        }
        return index_new;
    }
};
