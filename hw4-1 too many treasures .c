#include <stdio.h>
int n, q, l[1000001], r[1000001], m[1000001], v[1000001];
long long int p[1000001]={0};
int main(void)
{

   scanf("%d %d", &n, &q);   

   for(int i=1; i<n+1; i++)//寶藏價值
    {  
       scanf("%d", &v[i]);
       if(v[i]<0)
        {
            v[i]=0;
        }    
    }
    for(int i=1; i<n+1; i++)
    {
        scanf("%d %d %d", &l[i], &r[i], &m[i]);
    }
   for(int i=1; i<n+1; i++)
    {
       p[i]=p[i-1]+v[i];
    }
   
   for(int i=1; i<n+1; i++)
    {

        printf("%lld\n", p[l[i]+m[i]-1]-p[l[i]-1]);
    }

   return 0;


}