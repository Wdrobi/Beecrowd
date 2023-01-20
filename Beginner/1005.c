#include <stdio.h>

int main() {
    double A,B;
    float MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f",MEDIA);
    return 0;
}
