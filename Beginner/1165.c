#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int X[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &X[i]);
    }
    for(int i=0; i<N; i++)
    {
        int flag =0;
        if(X[i]==0 || X[i]==1){
            flag = 1;
        }
        for(int j=2; j <= X[i]/2; j++)
        {
            if(X[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("%d eh primo\n",X[i]);
        }
        else{
            printf("%d nao eh primo\n",X[i]);
        }
    }
    return 0;
}
