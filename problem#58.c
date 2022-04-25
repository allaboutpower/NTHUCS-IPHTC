/*Description

Given some integers, please list them in increasing order.

Input
First line is an integer T (T \leq 20)T(T≤20) followed by TT test cases.
Each test case consists of two lines. First line is an integer n(n≤10^4), and second line contains n integers
V 1​,V 2​,...,V n​. (-2^{31}< V_i < 2^{31}-1\ for\ 1 \leq i \leq n )(−2 31<V i​<2 31 −1 for 1≤i≤n)
*/

#include<stdio.h>


int main(void){

    int t;
    scanf("%ld", &t);
  	long long int a[10001]={0};

    while(t--){

        long int n;
        
        scanf("%ld", &n);
        for(int i=1; i<=n; i++){
            scanf("%lld", &a[i]);
        }


        for(int i=1; i<=n; i++){//n=3
            for(int j=i+1; j<=n; j++){
                if(a[i]>a[j]){
                    long int temp;
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }

        for(int i=1; i<=n; i++){
            printf("%lld", a[i]);
          	if(i!=n){printf(" ");}
          	
        }
        printf("\n");
       // printf("%lld %lld %lld ", a[1],a[2],a[3]);
        
        
    }
    return 0;
}
