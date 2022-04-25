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