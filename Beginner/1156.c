#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    for(int i=1; i<=Y; i++){
        printf("%d ",i);
        if(i%3==0){
            printf("\n");
        }
    }
    return 0;

}
