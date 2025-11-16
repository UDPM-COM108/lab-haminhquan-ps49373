#include <stdio.h>
#include <math.h>  

//Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
void Bai1() {
    double dtb;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);

    if (dtb >= 9)
        printf("Xuat sac\n");
    else if (dtb >= 8)
        printf("Gioi\n");
    else if (dtb >= 6.5)
        printf("Kha\n");
    else if (dtb >= 5)
        printf("Trung binh\n");
    else
        printf("Yeu\n");
}

//Bài 2: GIẢI PHƯƠNG TRÌNH BẬC NHẤT
void Bai2() {
    float a, b;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        printf("Phuong trinh co 1 nghiem: x = %.2f\n", -b / a);
    }
}

//Bài 3: GIẢI PHƯƠNG TRÌNH BẬC HAI
void Bai3() {
    float a, b, c;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh bac 1: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;

        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0)
            printf("Nghiem kep x = %.2f\n", -b / (2 * a));
        else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

//Bài 4: XÂY DỰNG MENU CHƯƠNG TRÌNH cho các bài tập trên
int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1: Tinh hoc luc\n");
        printf("2. Bai 2: Giai phuong trinh bac 1\n");
        printf("3. Bai 3: Giai phuong trinh bac 2\n");
        printf("4. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Bai1(); break;
            case 2: Bai2(); break;
            case 3: Bai3(); break;
            case 4: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 4);

    return 0;
}
