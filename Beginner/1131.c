#include <stdio.h>

int main()
{
    int inter,gremio,op,w_inter=0,w_gremio=0,draw=0,i=0;
    while(1){
        scanf("%d %d",&inter,&gremio);
        if(inter>gremio)
            w_inter++;
        if(inter<gremio)
            w_gremio++;
        if(inter==gremio)
            draw++;
        i++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
        if(op==1)
            continue;
        if(op==2)
            break;
    }
    printf("%d grenais\n",i);
    printf("Inter:%d\n",w_inter);
    printf("Gremio:%d\n",w_gremio);
    printf("Empates:%d\n",draw);

    if(w_inter>w_gremio)
        printf("Inter venceu mais\n");
    if(w_inter<w_gremio)
        printf("Gremio venceu mais\n");
    if(w_gremio==w_inter)
        printf("Nao houve vencedor\n");
    return 0;
}
