#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, j, k, gecici, N;
    printf("SHELL SORTING ALGORITHM\n");
    printf("Kac adet sayi uretilecek: ");
    scanf("%d", &N);
    int *dizi = (int *)malloc(N * sizeof(int));
    srand(time(0));
    printf("Dizi Elemanlari: ");
    for (i = 0; i < N; i++) {
        dizi[i] = rand() % 100;
        printf("%d ", dizi[i]);
    }

    for (i = N / 2; i > 0; i /= 2) {
        for (j = i; j < N; j++) {
            for (k = j - i; k >= 0; k -= i) {
                if (dizi[k + i] >= dizi[k]) {
                    break;
                } else {
                    gecici = dizi[k];
                    dizi[k] = dizi[k + i];
                    dizi[k + i] = gecici;
                }
            }
        }
    }
    printf("\nSiralanmis Dizi Elemanlari: ");
    for (k = 0; k < N; k++)
        printf("%d ", dizi[k]);

    free(dizi);
    return 0;
}
