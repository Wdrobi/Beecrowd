#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char sen[50][N];
    for(int i=0; i<N; i++)
    {
        scanf("%s[^\n]",sen);
    }

    for(int i=0; i<N; i++)
    {
        printf("I am Toorg!\n");
    }
    return 0;
}
