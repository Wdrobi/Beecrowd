#include <stdio.h>
int main()
{
    int A,B,C;

    scanf("%d",&A);

    scanf("%d",&B);
    if(A>B)
    {
        C = A;
    }
    else if(A<B)
    {
        C = B;
    }
    else
    {
        C = A;
    }
    printf("%d\n",C);

    return 0;
}
