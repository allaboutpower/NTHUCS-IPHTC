#include <stdio.h>
int main(void)
{
    double A, B, C, a, b, c;
    scanf("%lf %lf %lf",&A,&B,&C);
    c=((A+B+C)/2)-A;
    a=((A+B+C)/2)-B;
    b=((A+B+C)/2)-C;
    printf("%.0lf %.0lf %.0lf\n",a, b,c);
    return 0; 
}