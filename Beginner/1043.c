#include <stdio.h>

int main()
{
    float A,B,C;
    float perimetro,area;
    scanf("%f %f %f",&A,&B,&C);

    if(A+B>C && B+C>A && A+C>B){
        perimetro = A+B+C;
        printf("Perimetro = %.1f\n",perimetro);
    }
    else{
        area = ((A+B)/2)*C;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
