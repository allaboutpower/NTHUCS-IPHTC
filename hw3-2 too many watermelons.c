#include<stdio.h>

int main(void)
{
    int n, j, i, f, counter, s;
    scanf("%d", &n);
    int a[200001], b[200001], eat[200001]= {0}/*紀錄是否被吃過*/;
    for(i=1;i<n+1;i++)
    {scanf("%d", &a[i]);}
    for(i=1;i<n+1;i++)
    {scanf("%d", &b[i]);}
    
    for(f=1;f<n+1;f++){
        counter=0;
        if(eat[ b[f] ] == 0){
            for(;s<n+1;s++){
                
                    counter++;
                    eat[ a[s] ]=1;
                    if(b[f] == a[s]){
                      break;
                      s++;
                    }
                 
            }
            printf("%d ", counter-1);
        
        }
        else{
        printf("%d ", counter);
        }
    }
    printf("\n");
    return 0;
}