#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double A,B,C;
    float k,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);
    k = (B*B) - (4*A*C);
    if(k<0 || A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B + sqrt(k))/(2*A);
        R2 = (-B - sqrt(k))/(2*A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }

    return 0;
}
