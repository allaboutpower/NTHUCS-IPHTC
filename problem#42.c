#include <stdio.h>

int main(void)
{
    int n, u[4];
    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%d %d %d", &u[1], &u[2], &u[3] );
        for(int i=1; i<=3; i++)
        {
            for(int j=i+1; j<=3; j++)
            {
                if(u[i]>u[j])
                {
                    int temp;
                    temp=u[i];
                    u[i]=u[j];
                    u[j]=temp;
                }
            }
        }
        //printf("%d %d %d ",u[1], u[2], u[3]);
        if(u[3]-u[2]<=u[1])
        {
            printf("%d\n", (u[1]+u[2]+u[3])/2);
        } 
        else printf("%d\n", u[2]+u[1]);
    }
    return 0;
    
}