int main()
{
    int X,Y;
    int countt=0;
    scanf("%d %d",&X,&Y);
    for(int i=1; i<=Y; i++){

        if(countt>0){
            printf(" %d",i);
        }
        else{
            printf("%d",i);
        }
        countt++;
        if(countt%X==0){
            countt=0;
            printf("\n");
        }
    }
    return 0;
}
