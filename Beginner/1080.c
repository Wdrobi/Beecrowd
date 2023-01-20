#include <stdio.h>

int main()
{
    int num[100],max,index;

    for(int i=0;i<100;i++){
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(int i=0;i<100;i++){
        if(max <= num[i]){
            max = num[i];
            index = i+1;
        }
    }
    printf("%d\n%d\n",max,index);
    return 0;
}
