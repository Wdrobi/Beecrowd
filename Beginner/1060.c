#include <stdio.h>

int main() {

    int n[6],count=0;
    for(int i =0; i<6; i++){
        scanf("%d",&n[i]);
    }
    for(int i =0; i<6; i++){
        if(n[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
