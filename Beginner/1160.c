#include <stdio.h>

int main()
{
    int T,PA,PB,p,q,tem1,tem2,y;
    float G1,G2;

    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
        tem1=PA;
        tem2=PB;
        y=0;
        while(p<=q){
            p=tem1 + tem1*(G1/100);
            q=tem2 + tem2*(G2/100);
            tem1=p;
            tem2=q;
            y++;
            if(y>100)
                break;
        }
        if(y>100)
            printf("Mais de 1 seculo\n");
        else
            printf("%d anos.\n",y);
        p=0;
        q=0;
    }
    return 0;
}
