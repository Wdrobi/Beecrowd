#include <stdio.h>

int main()
{
    int i;
    double s = 1, j = 2;
    for (i = 3; i <= 39; i += 2)
    {
        s = s + (double)i / j;
        j = j * 2;
    }
    printf("%.2lf\n", s);
    return 0;
}
