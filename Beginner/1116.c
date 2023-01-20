#include <stdio.h>
int main()
{
    int X,Y,N;
    float result;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y!=0)
        {
            result = (float)X /Y;
            printf("%.1f\n",result);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
