#include <stdio.h>
int main()
{
    int X,Y,max,min,sum=0;
    scanf("%d %d",&X,&Y);

    if(X>Y)
    {
        max=X;
        min=Y;
    }
    else
    {
        max=Y;
        min=X;
    }
    for(int i=min; i<=max; i++)
    {
        if(i%13!=0)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
