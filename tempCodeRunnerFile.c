#include <stdio.h>

int main()
{
    int N,S,min=0,in;
    scanf("%d %d",&N,&S);
    for(int i=0; i<N){
        scanf("%d",&in);
        S += in;
        if(S<min){
            min = S;
        }
    }
    printf("%d\n",min);
    return 0;
}