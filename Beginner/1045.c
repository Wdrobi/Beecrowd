#include <stdio.h>

int main()
{
    double A,B,C,max,n1,n2;
    scanf("%d %d %d",&A,&B,&C);

    if(A>B && A>C){
        max=A;
        n1=B;
        n2=C;
    }
    else if(B>A && B>C){
        max=B;
        n1=A;
        n2=C;
    }
    else {
        max=C;
        n1=B;
        n2=A;
    }
    if(max >= n1+n2){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(max*max == (n1*n1)+(n2*n2)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(max*max > (n1*n1)+(n2*n2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(max*max < (n1*n1)+(n2*n2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    else if(A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if((A==B && A!=C) || (B==C && B!=A) || (A==C && A!=B) ){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
