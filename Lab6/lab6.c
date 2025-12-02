#include <stdio.h>
#include <math.h>
void hoanvi(int *a,int *b){
    int tam = *a;
    *a = *b;
    *b = tam;
}
int main(){
//Bai1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int mang[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap vao mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }
        float tong=0;
        float tb;
        int count=0;
    for ( i = 0; i < n; i++)
    {
        if(mang[i] % 3== 0){
            tong += mang[i];
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co chia het cho 3");
    }else{
        float tb = tong/count;
        printf("\nGia tri trung binh chia het cho 3: %.2f", tb);
    }

//Bai2: TIM GIA TRI LON NHAT VA NHO NHAT TRONG MANG
    int mang1[100];
    int m;
    do
    {
        printf("\nNhap so phan tu cua mang a[n] 0 < m <= 100: ");
        scanf("%d", &m);
    } while (m < 0 || m > 100);
    for (int i = 0; i < m; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &mang1[i]);
    }
    
    int max = mang1[0];
    int min = mang1[0];

    for (int j = 0; j < m; j++) {
        if (mang1[j] > max) {
            max = mang1[j];
        }
        if (mang1[j] < min) {
            min = mang1[j];
        }
    }

    printf("Max la: %d\n", max);
    printf("Min la: %d\n", min);

//Bai3: Sap xep mang theo thu tu giam dan
for (int i = 0; i < m; i++)
{
    for (int j = i+1; j < m; j++)
    {
        if (mang1[i] < mang1[j])
        {
            hoanvi(&mang1[i],&mang1[j]);
        }
        
    }
    
}
printf("Mang xep giam dan la: ");
for ( i = 0; i < m; i++)
{
    printf(" %d", mang1[i]);
}
//Bai4:Tinh binh phuong cac phan tu trong mang 2 chieu
int a[10][10];
int row, colum;
int abp[10][10];
printf("Row la: ");
scanf("%d" ,&row);
printf("Colum la: ");
scanf("%d", &colum);
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < colum; j++)
    {
        printf("a[%d][%d]= ", i,j);
        scanf("%d", &a[i][j]);
    }
    
}

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < colum; j++)
    {
        abp[i][j]=a[i][j]*a[i][j];
    }
    
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < colum; j++)
    {
        printf("%d ", abp[i][j]);
    }
 printf("\n");   
}

    return 0;
}
