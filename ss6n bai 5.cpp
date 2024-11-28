#include <stdio.h>

int namnhuan(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int year, month, days;

    printf("moi ban nhap nam: ");
    scanf("%d", &year);

    printf("moi ban nhap thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("thang khong hop le.\n");
        return 0;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        if (namnhuan(year)) {
            days = 29;
        } else {
            days = 28;
        }
    }

    printf("Thang %d cua nam %d co %d ngay.\n", month, year, days);

    return 0;
}

