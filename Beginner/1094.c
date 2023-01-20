#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,num,c=0,r=0,s=0,t=0;
    char ch,b;
    float pc,pr,ps;
    b = '%';
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %c",&num,&ch);
        if(ch == 'C')
        {
            c+=num;
        }
        if(ch=='R')
        {
            r+=num;
        }
        if(ch == 'S')
        {
            s+=num;
        }
    }

    t = c+r+s;
    pc=(c/(t*1.00))*100.00;
    pr=(r/(t*1.00))*100.00;
    ps=(s/(t*1.00))*100.00;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %C\n",pc,b);
    printf("Percentual de ratos: %.2f %c\n",pr,b);
    printf("Percentual de sapos: %.2f %c\n",ps,b);


    return 0;
}
