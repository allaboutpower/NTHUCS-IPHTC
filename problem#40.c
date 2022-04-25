#include <stdio.h>

int main(void){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int sum= (A+B+C)/2;
    printf("%d %d %d", sum-B, sum-C, sum-A);
    return 0;
}