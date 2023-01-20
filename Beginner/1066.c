#include <stdio.h>
int main()
{
    int num[5],even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++){
        if(num[i]%2==0)
            even++;
        else
            odd++;
        if(num[i]>0)
            pos++;
        if(num[i]<0)
            neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
    return 0;
}
