#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int N,f=0,s=1,next;
    int T,i,j;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%lld",&N);
        next=f+s;
        if(N==0)
            next=0;
        else if(N==1)
            next=1;
        else{
            for( j=3;j<=N;j++)
        {
            f=s;
            s=next;
            next=f+s;
        }
        }
        f=0,s=1;
        printf("Fib(%lld) = %lld\n",N,next);
    }

    return 0;

}

