#include <stdio.h>
int main()
{
    double salary;
    float tax;
    scanf("%lf",&salary);

    if(salary<=2000.00)
    {
        printf("Isento\n");
    }
    else if(salary>=2000.01 && salary<=3000.00)
    {
        tax = (salary -2000.00) * 0.08;
        printf("R$ %.2f\n",tax);
    }
    else if(salary>=3000.01 && salary<=4500.00)
    {
        tax = (salary-3000.00)* 0.18 + 1000.00 * 0.08;
        printf("R$ %.2f\n",tax);
    }
    else if(salary>4500.00)
    {
        tax = (salary-4500.00)* 0.28 + 1500.00 *0.18 + 1000.00 * 0.08;
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
