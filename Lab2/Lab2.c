//BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>// thư viện
int main(){
    float a,b,tong,hieu;
    printf("Nhap so 1: ");
    scanf("%f", &a);
    printf("Nhap so 2: ");
    scanf("%f", &b);
    tong = a+b;
    hieu = a-b;
    printf("tong cua 2 so: %.1f", tong);
    printf("hieu cua 2 so: %.1f", hieu);
//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN

    float d,e,chuvi,dientich;
    printf("Nhap so cdai: ");
    scanf("%f", &d);
    printf("Nhap so crong: ");
    scanf("%f", &e);
    chuvi = (d + e) * 2;
    dientich = d * e;
    printf("chu vi hcn: %.1f", chuvi);
    printf("dien tich hcn: %.1f", dientich);
//Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN

#define PI 3.14
    float r,chuHT,dientichHT;
    printf("Nhap so Ban kinh: ");
    scanf("%f", &r);
    chuHT = 2 * r * PI;
    dientichHT = r * r * PI;
    printf("chu vi HT: %.1f", chuHT);
    printf("dien tich HT: %.1f", dientichHT);
//Bài 4: TÍNH BIẾN TRUNG BÌNH

    float toan,li,hoa,diemTB;
    printf("Nhap mon toan: ");
    scanf("%f", &toan);
    printf("Nhap mon li: ");
    scanf("%f", &li);
    printf("Nhap mon hoa: ");
    scanf("%f", &hoa);
    diemTB = (toan * 3 + li * 2 + hoa)/6;
    printf("diemtb: %.1f", diemTB);
//Bài 5: TÍNH CHU VI DIỆN TÍCH HÌNH TAM GIÁC
    
    float cgv1,cgv2,ch,chuviHTG,dientichHTG;
    printf("Nhap so cgv1: ");
    scanf("%f", &cgv1);
    printf("Nhap so cgv2: ");
    scanf("%f", &cgv2);
    printf("Nhap so ch: ");
    scanf("%f", &ch);
    chuviHTG = cgv1 + cgv2 + ch;
    dientichHTG = (cgv1 * cgv2)/2;
    printf("chuvi tam giac: %.1f", chuviHTG);
    printf("dientich tam giac: %.1f", dientichHTG);
    return 0;
}
