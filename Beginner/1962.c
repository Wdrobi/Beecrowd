#include <stdio.h>

int main()
{
    int N,T;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&T);
        if(T>2015)
        {
            printf("%d A.C.\n",(T-2014));
        }
        else if(T<2015)
        {
            printf("%d D.C.\n",(2015-T));
        }
        else
        {
            printf("1 A.C.\n");
        }
    }
    return 0;
}
