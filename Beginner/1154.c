#include <stdio.h>

int main()
{
    int n,sum=0;
    float avr,count=0;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        sum += n;
        count++;
    }
    avr = sum/count;
    printf("%.2f\n",avr);
    return 0;
}
