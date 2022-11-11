#include <stdio.h>

int main(){
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    const double pi=3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIANGULO=0.5*A*C;
    CIRCULO=pi*C*C;
    TRAPEZIO=0.5*(A+B)*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %.3lf",TRIANGULO);
    printf("\nCIRCULO: %.3lf",CIRCULO);
    printf("\nTRAPEZIO: %.3lf",TRAPEZIO);
    printf("\nQUADRADO: %.3lf",QUADRADO);
    printf("\nRETANGULO: %.3lf\n",RETANGULO);
    return 0;

}
