#include <stdio.h>// thư viện
int main(){
    //printf("Hello World");// xuat ra man hinh Hello World
    //printf("\nHello World");
    int a,b;
    char ten[10];// cap phat ki tu
    printf("Nhap a va b: 2 va 3 ");
    scanf("%d %d", &a,&b);
    printf("Nhap vao ten toi:");
    scanf("%s", &ten);
    printf("\nXin chao toi la: %s",ten);
    return 0;
}