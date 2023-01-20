#include <stdio.h>

int main()
{
    int N,Ans;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&Ans);
        printf("resposta %d: %d\n",i,Ans);
    }
    return 0;
}
