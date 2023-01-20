#include <stdio.h>

int main()
{
    int N, S, min, in;
    scanf("%d %d", &N, &S);
    min = S;
    while (N--)
    {
        scanf("%d", &in);
        S += in;
        if (S < min)
        {
            min = S;
        }
    }
    printf("%d\n", min);
    return 0;
}