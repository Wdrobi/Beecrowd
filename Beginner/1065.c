#include <stdio.h>

int main() {

    int n[4],count=0;
    for(int i =0; i<5; i++){
        scanf("%d",&n[i]);
    }
    for(int i =0; i<5; i++){
        if(n[i]%2==0){
            count++;
        }
    }
    printf("%d valores pares\n",count);

    return 0;
}
