#include<stdio.h>
int p[(int)1e6+1]={0};

int count(int d)
{
    int digit=0;
    while(d>0)
    {
        if(d%10==1)
        {
            digit++;
        }
        d = d/10;
    }
    return digit;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=1; i <= (int)1e6; i++)
    {
        p[i]=p[i-1]+count(i);
    }

    while(t--)
    {
        int a,b;
        scanf("%d%d ", &a, &b );
        printf("%d\n", p[b]-p[a-1]);        
    }
    return 0;
}
