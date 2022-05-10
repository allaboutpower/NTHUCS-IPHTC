#include<stdio.h>

long long fpw(long long x, long long y, int m);

int main(void){
    long long x;
    long long y;
    int m;
    scanf("%lld %lld %d", &x, &y, &m);
    printf("%lld", fpw(x, y, m)) ;
    return 0;


}


long long fpw(long long x, long long y, int m){
    if(y == 0) return 1%m;
    long long tmp;
    if(y%2==0){
        tmp = fpw(x, y/2, m);
        return (tmp * tmp)%m; 
    }
    else{
        tmp = fpw(x, y/2, m);
        return ((tmp * tmp)%m * (x%m))%m ;
    }
}
