#include <stdio.h>
#include <math.h>

int main()
{
    int hour, minute, second, n;
    scanf("%d", &n);

    hour = n / 3600;
    minute = n % 3600 / 60;
    second = n % 60;
    printf("%d:%d:%d\n", hour, minute, second);
    return 0;
}
