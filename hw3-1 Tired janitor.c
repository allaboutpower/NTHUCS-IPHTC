#include <stdio.h>

long long int k, sum[1000001]={0};
int in[1000001];
int main(void)
{
    int a, b, c, d, p;
    scanf("%lld %lld", &a, &b);

    for(int i=1;i<a+1;i++){
        scanf("%d(/`A`)/ ~I__I ", &k);
        in[i]=k;} 

    for(int i=1;i<a+1;i++){
        for(int j=1;j<i+1;j++){
        sum[i]=in[j]+sum[i-1];
        }
    }
    for(p=1;p<b+1;p++){
    scanf("%d %d", &c, &d);
    printf("%lld\n", sum[d]-sum[c-1]);}
    return 0;
}