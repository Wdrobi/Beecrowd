#include <stdio.h>

int main()
{
    int L;
    char T;
    float M[12][12],sum=0,aver;
    scanf("%d",&L);
    for (int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&M[i][j]);
            sum+=M[L][j];
        }
    }
    aver = sum/12;
    scanf("%c",&T);
    switch(T){
    case S:
        printf("%.1f",sum);
    case M:
        printf("%.1f",aver);
    }
    return 0;
}
