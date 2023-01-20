#include <stdio.h>

int main() {
    int employee,hour;
    float perhour,salary;
    scanf("%d",&employee);
    scanf("%d",&hour);
    scanf("%f",&perhour);
    salary=hour*perhour;
    printf("NUMBER = %d\n",employee);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
