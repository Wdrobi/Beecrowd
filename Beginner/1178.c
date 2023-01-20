#include <stdio.h>

int main()
{
    double X, N[100];
    scanf("%lf",&X);
    N[0] = X;

    for(int i =0; i<100;i++){
        N[i+1] = N[i] / 2;
    }
    for(int i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
    }
    return 0;
}
