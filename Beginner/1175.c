#include <stdio.h>

int main()
{
    int N[20],temp;
    for(int i=0; i<20;i++){
        scanf("%d",&N[i]);
    }
    for(int i=0;i<20/2;i++){
        temp=N[i];
        N[i]=N[20-i-1];
        N[20-i-1]=temp;
    }
    for(int i=0; i<20; i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
