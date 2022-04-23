#include <stdio.h> 
#include <math.h>
#include <string.h>

int gcd(int a, int b);

int main(void){
    int a, b; 
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a,b));
    return 0;
}   

int gcd(int a, int b){
    if(b==0) return a; 
    else return gcd(b, a%b);    
}