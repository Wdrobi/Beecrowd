#include <stdio.h>
int main()
{
    int M,N,max,min,sum=0,count=0;
    while(1)
    {
        scanf("%d %d",&M,&N);

        if(M<=0 || N<=0)
        {
            break;
        }
        if(M>N)
        {
            max=M;
            min=N;
        }
        else
        {
            max=N;
            min=M;
        }
        for(int i=min; i<=max; i++)
        {
            sum += i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
        sum = 0;
    }

    return 0;
}
