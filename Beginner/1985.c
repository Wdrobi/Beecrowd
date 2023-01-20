#include <stdio.h>
int main()
{
    int p, q, t;
    float price,sum = 0.0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &p, &q);
        if (p == 1001)
        {
            price = q * 1.50;
        }
        else if (p == 1002)
        {
            price = q * 2.50;
        }
        else if (p == 1003)
        {
            price = q * 3.50;
        }
        else if (p == 1004)
        {
            price = q * 4.50;
        }
        else if (p == 1005)
        {
            price = q * 5.50;
        }
        sum += price;
    }
    printf("%.2f\n", sum);
    return 0;
}