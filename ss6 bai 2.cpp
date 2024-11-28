#include <stdio.h>

int main() {
    int number;        
    int sochan; 
    int sole;  

    printf("moi ban nhap 5 so nguyen:\n");

    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0) {
            sochan++;
        } else {
            sole++;
        }
    }

    printf("Tong so chan ma ban nhap la: %d\n", sochan);
    printf("Tong so le ma ban nhap la: %d\n", sole);

    return 0;
}

