#include <stdio.h>

int main()
{
    int T, N[1000],a=0;
    scanf("%d",&T);

    for(int i=0; i<1000; i++){
        printf("N[%d] = %d\n",i,a++);
        if(a==T){
            a=0;
        }
    }
    return 0;
}
