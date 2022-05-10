#include<stdio.h>

int ar[1001][1001];
int row_ans[1001], col_ans[1001];

int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j< n; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n; j++){
            if(ar[i][j]>=row_ans[i]) row_ans[i] = ar[i][j];
            
        }
    }

    
    for(int i=0 ; i<n; i++){
        int tmp = 50000;
        for(int j=0 ; j<n; j++){
            
            if(ar[j][i]< tmp ) tmp = ar[j][i];   col_ans[i] = tmp;
        }
    }


    for(int i=0; i<n; i++){
        printf("%d", row_ans[i]);
        if(i<n-1) printf(" ");
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d", col_ans[i]);
        if(i<n-1) printf(" ");
    }
    return 0 ;
}