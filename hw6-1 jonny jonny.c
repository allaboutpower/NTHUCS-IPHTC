#include<stdio.h>
int a[21], counter;
int n, k;

int method(int, int);

int main(void){
    
    scanf("%d %d", &n,&k);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int ans = method(0,0);
    printf("%d", ans);
    return 0;
}

int method(int ind, int sum)
{
    if(sum == k ) return 1;
    if(ind >= n || sum > k) return 0;
    return method(ind+1, sum) + method(ind+1, sum+a[ind]);
}