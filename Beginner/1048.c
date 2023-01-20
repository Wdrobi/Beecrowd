#include <stdio.h>

int main()
{
    float salary,ns;
    char ch = '%';
    scanf("%f",&salary);
    if(salary<=400.00){
        ns = salary + (salary * 0.15);
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ns-salary);
        printf("Em percentual: 15 %c\n",ch);
    }
    else if(salary>=400.01 && salary<=800.00){
        ns = salary + (salary * 0.12);
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ns-salary);
        printf("Em percentual: 12 %c\n",ch);
    }
    else if(salary>=800.01 && salary<=1200.00){
        ns = salary + (salary * 0.10);
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ns-salary);
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(salary>=1200.01 && salary<=2000.00){
        ns = salary + (salary * 0.07);
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ns-salary);
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(salary>2000.00){
        ns = salary + (salary * 0.04);
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",ns-salary);
        printf("Em percentual: 4 %c\n",ch);
    }
    return 0;
}
