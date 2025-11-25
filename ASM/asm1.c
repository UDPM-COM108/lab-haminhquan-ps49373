#include <stdio.h>
int main(){
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cuar 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Xay dung chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-Lott(2/15)\n");
        printf("10. Xay dung chuong trinh tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

      switch (choice) {
            case 1: printf("Kiem tra so nguyen"); break;
            case 2: printf("Tim Uoc so chung va boi so chung cuar 2 so"); break;
            case 3: printf("Chuong trinh tinh tien cho quan Karaoke"); break;
            case 4: printf("Tinh tien dien"); break;
            case 5: printf("Chuc nang doi tien"); break;
            case 6: printf("Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop"); break;
            case 7: printf("Xay dung chuong trinh vay tien mua xe"); break;
            case 8: printf("Sap xep thong tin sinh vien"); break;
            case 9: printf("Xay dung game FPOLY-Lott(2/15)"); break;
            case 10: printf("Xay dung chuong trinh tinh toan phan so"); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    }while (choice != 0);

    return 0;
}