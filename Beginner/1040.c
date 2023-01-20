#include <stdio.h>
int main()
{
    float N1, N2, N3, N4;
    float average,avr;
    scanf("%f %f %f %f",&N1, &N2, &N3, &N4);

    average = (2*N1 + 3*N2 + 4*N3 + 1*N4)/10;
    printf("Media: %.1f\n",average);
    if(average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(average>=5.0 && average<=6.9)
    {
        printf("Aluno em exame.\n");
        float N5;
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);

        avr = (average+N5)/2;
        if(avr>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avr <=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avr);
    }
    return 0;
}
