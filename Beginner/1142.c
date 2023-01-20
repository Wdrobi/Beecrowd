#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    for (int i=0;i<N*4;i+=4){
        printf("%d %d %d PUM\n",(i+1),(i+2),(i+3));
    }
    return 0;
}
