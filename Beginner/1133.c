#include <stdio.h>
int main()
{
    int X,Y,max,min;
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
    for(int i=(min+1); i<max; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
