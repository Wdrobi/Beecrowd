#include <stdio.h>

int elder(int H,int Z,int L)
{
    int max;
    if(H>Z && H>L){
        max = H;
    }
    else if(Z>H && Z>L){
        max = Z;
    }
    else{
        max = L;
    }
    return max;
}

int young(int H,int Z,int L)
{
    int min;
    if(H<Z && H<L){
        min = H;
    }
    else if(Z<H && Z<L){
        min = Z;
    }
    else{
        min = L;
    }
    return min;
}

int main()
{
    int H,Z,L;
    int max,min;
    scanf("%d %d %d",&H,&Z,&L);
    max = elder(H,Z,L);
    min = young(H,Z,L);
    if(H>min && H<max){
        printf("huguinho\n");
    }
    else if(Z>min && Z<max){
        printf("zezinho\n");
    }
    else{
        printf("luisinho\n");
    }
    return 0;
}
