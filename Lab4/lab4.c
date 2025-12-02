#include <stdio.h>
#include <math.h>  
//BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
void Bai1() {
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    i = min;

    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh tong = %.2f\n", trungBinh);
    } else {
        printf("Khong co so chan nao!\n");
    }
}
     
//Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ

void Bai2() {
    int x, i, count = 0;

    printf("Nhap x: ");
    scanf("%d", &x);

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }

    if (count == 0)
        printf("%d la so nguyen to\n", x);
    else
        printf("%d khong phai so nguyen to\n", x);
}

//Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG

void Bai3() {
    int t, i, lachinhphuong = 0;

    printf("Nhap t: ");
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        if (i * i == t) {
            lachinhphuong = 1;
            break;
        }
    }

    if (lachinhphuong == 1)
        printf("%d la so chinh phuong\n", t);
    else
        printf("%d khong phai so chinh phuong\n", t);
}

//Bài 4: XÂY DỰNG MENU CHƯƠNG TRÌNH cho các bài tập trên
int main(){
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Bai 1: Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
        printf("2. Bai 2: Xac dinh so nguyen to\n");
        printf("3. Bai 3: Xac dinh so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Bai1(); break;
            case 2: Bai2(); break;
            case 3: Bai3(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

return 0;
}
