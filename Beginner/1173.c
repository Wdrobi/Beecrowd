#include <stdio.h>

int main()
{
    int V,N[100];
    scanf("%d",&V);

    N[0]= V;
    for(int i=0;i<100;i++){
        N[i+1] = N[i] * 2;
    }
    for(int i=0;i<100;i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
