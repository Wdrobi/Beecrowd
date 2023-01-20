#include <stdio.h>
int main()
{
    int num[3],a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    num[0]=a;
    num[1]=b;
    num[2]=c;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(num[i]<num[j]){
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
   printf("%d\n%d\n%d\n",num[0],num[1],num[2]);
   printf("\n%d\n%d\n%d\n", a, b, c);
   return 0;
}
