#include <stdio.h>

int main() {
    int code,code1,unit,unit1;
    float price,price1,amount;
    scanf("%d %d %f",&code,&unit,&price);
    scanf("%d %d %f",&code1,&unit1,&price1);
    amount=(unit*price)+(unit1*price1);
    printf("VALOR A PAGAR: R$ %.2f\n",amount);
    return 0;
}
