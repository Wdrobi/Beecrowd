#include <stdio.h>
#include <math.h>

int main()
{
    char s[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", s);
    printf("<% 30s>\n", s);
    printf("<% .20s>\n", s);
    printf("<% -20s>\n", s);
    printf("<% -30s>\n", s);
    printf("<% .30s>\n", s);
    printf("<% 30.20s>\n", s);
    printf("<% -30.20s>\n", s);

    return 0;
}
