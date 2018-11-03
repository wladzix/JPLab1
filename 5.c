#include <stdio.h>
#include <math.h>
int main()
{
    double a;
scanf("%lf",&a);
if(a<0)
{
    printf("Pierwiastek: BLAD\n");
    double b=1/a;
    printf("Odwrotnosc: %.2lf",b);
}

if(a>0)
{
    double c= sqrt(a);
    double b = 1/a;
    printf("Pierwiastek: %.2lf\n",c);
    printf("Odwrotnosc: %.2lf",b);
}
if(a==0)
{
    double c = sqrt(a);
    printf("Pierwiastek: %.2lf\n",c);
    printf("Odwrotnosc: BLAD");
}
return 0;
}
