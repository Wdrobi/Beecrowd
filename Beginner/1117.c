#include <stdio.h>

int main()
{
    float x, sum = 0.0;
    int count = 0;
    while (1)
    {
        if (count == 2)
        {
            break;
        }
        scanf("%f", &x);
        if (x >= 0 && x <= 10)
        {
            count++;
            sum += x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", sum / 2);
    return 0;
}
