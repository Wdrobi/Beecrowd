#include <stdio.h>

int main()
{
    int X,Y,sum=0;
    int max,min;
    scanf("%d %d", &X,&Y);

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
        if(i%2 !=0)
        {
            sum +=i;
        }
    }

    printf("%d\n",sum);
    return 0;
}
