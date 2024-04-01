#include <stdio.h>

int main()
{
    int X,Z,sum=0,count=0,a;
    scanf("%d",&X);

    while(1){
        scanf("%d",&Z);
        if(Z>X){
            a=Z;
            break;
        }
    }
    for(int i=X;i<a;i++){
        count++;
        sum+=i;
        if(sum>a)
            break;
    }
    printf("%d\n",count);
    return 0;
}
