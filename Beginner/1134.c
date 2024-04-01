#include <stdio.h>

int main()
{
    int ch,al=0,ga=0,di=0;

    while(1){
        scanf("%d",&ch);
        if(ch==4)
            break;
        if(ch==1)
            al++;
        else if(ch==2)
            ga++;
        else if(ch==3)
            di++;
        else
            continue;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",di);
    return 0;
}
