#include <stdio.h>

int main()
{
    int A,N;
    int sum=0;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&X,&Y);

        if(X%2==0)
            X++;

        for(int i=0; i<Y; i++)
        {
            sum +=X;
            X+=2;
        }

        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
