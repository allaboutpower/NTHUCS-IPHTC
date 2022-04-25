#include<stdio.h>
int a[1001];
int max = 0;
int gcd(int a, int b);

int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //printf("%d", a[0]);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(gcd(a[i], a[j])> max){
                    max = gcd(a[i], a[j]);
                }
            }
        }
    }
    printf("%d", max);
    return 0; 
}

int gcd(int a, int b){
    if(b==0) return a; 
    else return gcd(b, a%b);    
}   