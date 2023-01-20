#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int num[N];
    num[0]=0;
    num[1]=1;

    for(int i=2;i<N;i++){
       num[i] =num[i-1] + num[i-2];
    }
    printf("0");
    for(int i=1;i<N;i++){
        printf(" %d",num[i]);
    }
    printf("\n");
    return 0;
}
