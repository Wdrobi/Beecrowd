
#include <stdio.h>

double sum(int n)
{
  double i, s = 0.0;
  for (i = 1; i <= n; i++)
      s = s + 1/i;
  return s;
}

int main()
{
    int n = 100;
    printf("%.2lf\n", sum(n));
    return 0;
}
