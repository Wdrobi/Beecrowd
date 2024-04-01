#include <stdio.h>

int main()
{
    int L;
    scanf("%d", &L);
    char T[2];
    scanf("%s", T);
    float m[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    if (T[0] == 'S')
    {
        float sum = 0;
        for (int k = 0; k < 12; k++)
        {
            sum += m[L][k];
        }
        printf("%.1f\n", sum);
    }
    if (T[0] == 'M')
    {
        float avr = 0;
        float sum = 0;
        for (int k = 0; k < 12; k++)
        {
            sum += m[L][k];
        }
        avr = sum / 12;
        printf("%.1f\n", avr);
    }
    return 0;
}
