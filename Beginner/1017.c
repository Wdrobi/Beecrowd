#include <stdio.h>
#include <math.h>

int main()
{
    float time, speed;
    float fuel;
    scanf("%f %f", &time, &speed);
    fuel = time * speed / 12;
    printf("%.3f\n", fuel);
    return 0;
}
