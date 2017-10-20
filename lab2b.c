#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double x,h,d,sum,present;             // h - крок табуляції, d - похибка, sum - сума усіх поточних чисел present
    int k;
    
    printf("Введіть крок табуляції h \n");
    scanf("%lf", &h);
    printf("Введіть похибку d \n");
    scanf("%lf", &d);
    
    for (x=3;x<=4;x+=h)
    {
        sum=0;
        k=1;
        do
        {
        present=1/k*tan(x/pow(2,k));
        sum+=present;
        k++;
        }
        while (fabs (present)>d);
        printf ("x = %f\n", x);
        printf ("sum = %f\n\n", sum);
    }
}