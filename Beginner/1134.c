#include <stdio.h>

void takevalue(int t){
    int op;
    int a=0,g=0,d=0;
    for(int i=0;i<t;i++){
        scanf("%d",&op);
        switch(op){
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;
        case 4:
            return 0;
        default:
            takevalue();
        }
    }
    printf("MUITO OBRIGADO\n"
            "Alcool: %d\n"
            "Gasolina: %d\n"
             "Diesel: %d\n",a,g,d);
}
int main()
{
    int test;
    takevalue(test);
    return 0;
}
