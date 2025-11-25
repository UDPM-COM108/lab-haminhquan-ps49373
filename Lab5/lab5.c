#include <stdio.h>

//Bai 1: Tìm số lớn nhất trong 3 số đã cho
int main(){
int a, b, c;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
int max = a;
    if (b > a)
    {
        max = b;
    }if (c > b)
    {
        max = c;
    }
printf("So lon nhat la: %d\n", max);

//Bài 2: Tính năm nhuận
int year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai nam nhuan\n", year);
    }
    return 0;
}