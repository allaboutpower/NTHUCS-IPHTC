// This arr contains n numbers and start from index 0
// q is the query number which you nned to find the index
// n is the length of arr

int BS(int* arr, int q, int n ){
    int L = 0, R = n, ans = -1;
    while(L<R){
        int M = (L+R)/2 ;
        if(arr[M] >= q){
            R = M;
            ans = M; 
        }
        else L = M + 1;
    }
    return ans; 
}