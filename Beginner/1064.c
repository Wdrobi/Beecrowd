#include <stdio.h>

int main()
{

    float n[6],sum=0,average;
    int count =0;
    for(int i =0; i<6; i++)
    {
        scanf("%f",&n[i]);
    }
    for(int i =0; i<6; i++)
    {
        if(n[i]>0)
        {
            sum += n[i];
            count++;
            average = sum / count;
        }

    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

    return 0;
}
