#include <stdio.h>

int main()
{
    float n,avr;
    int sum,count,pc;
    while(1)
    {
        scanf("%f",&n);

        if(n<10)
        {
            printf("nota invalida\n");
        }
        if(n>=10)
        {
            pc++;
        }

        else
        {
            if(n>=0 && n<=10)
            {
                count++;
            }
            sum += n;
        }
        if(pc==2)
        {
            break;
        }
    }
    avr = sum/count;
    printf("media = %.2f\n",sum);
    return 0;
}
