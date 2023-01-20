#include <stdio.h>

int main()
{
    int N,X,Y;
    int max,min,sum = 0;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&X,&Y);
        if(X>Y){
            max=X;
            min=Y;
        }
        else{
            max=Y;
            min=X;
        }
        for(int j=min+1;j<max;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}
