#include <stdio.h>

#define PI 3.14159

int main()
{
    float chieuDai, chieuRong;
    float banKinh;
    float chuViHCN, dienTichHCN;
    float chuViHT, dienTichHT;

    printf("===== HINH CHU NHAT =====\n");

    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);

    chuViHCN = (chieuDai + chieuRong) * 2;
    dienTichHCN = chieuDai * chieuRong;

    printf("\nChu vi hinh chu nhat: %.2f\n", chuViHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", dienTichHCN);

    printf("\n===== HINH TRON =====\n");

    printf("Nhap ban kinh: ");
    scanf("%f", &banKinh);

    chuViHT = 2 * PI * banKinh;
    dienTichHT = PI * banKinh * banKinh;

    printf("\nChu vi hinh tron: %.2f\n", chuViHT);
    printf("Dien tich hinh tron: %.2f\n", dienTichHT);

    return 0;
}