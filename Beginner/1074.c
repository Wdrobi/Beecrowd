#include <stdio.h>

int main()
{

    int N;
    scanf("%d",&N);
    int X[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }
    for(int i=0; i<N; i++)
    {
        if(X[i]==0){
            printf("NULL\n");
        }
        else if(X[i]%2==0){
            if(X[i]>0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("EVEN NEGATIVE\n");
            }
        }

        else{
            if(X[i]>0){
                printf("ODD POSITIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}


