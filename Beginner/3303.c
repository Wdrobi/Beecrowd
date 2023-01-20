#include <stdio.h>
#include <string.h>
int main()
{
    char word[21];
    int count=0;
    scanf("%s",word);

    for(int i=0;word[i]!='\0';i++){
        count++;
    }
    if(count>=10){
        printf("palavrao\n");
    }
    else{
        printf("palavrinha\n");
    }
    return 0;
}
