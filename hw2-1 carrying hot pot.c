#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
    double a, b, sum;
    int c;

    scanf("%lf %lf %d",&a,&b,&c);
    sum= a*b;


    printf("%0.*lf\n",c, sum);

    return 0;
}