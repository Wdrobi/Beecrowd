#include <stdio.h>

int main() {
    char employeeName[30];
    double fixSalary,sale,total;
    scanf("%s",&employeeName);
    scanf("%lf",&fixSalary);
    scanf("%lf",&sale);
    total=fixSalary+(sale*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
