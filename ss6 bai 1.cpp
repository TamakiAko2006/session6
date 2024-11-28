#include <stdio.h>

int main() {
    int numbers[5];
    int a; 

    printf("moi ban nhap so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 != 0) {
            a += numbers[i];
        }
    }

    printf("5 so nguyen ma ban vua nhap la: %d\n", a);

    return 0;
}
