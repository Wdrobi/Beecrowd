#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        long int X;
        scanf("%ld", &X);
        int fl = 0; // Reset fl for each number

        if (X == 0 || X == 1) {
            printf("Not Prime\n");
            continue;
        }

        for (int j = 2; j * j <= X; j++) {
            if (X % j == 0) {
                fl = 1;
                break;
            }
        }

        if (fl == 1) {
            printf("Not Prime\n");
        } else {
            printf("Prime\n");
        }
    }

    return 0;
}
