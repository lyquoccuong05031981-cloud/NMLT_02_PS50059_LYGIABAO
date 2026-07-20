#include <stdio.h>

int main()
{
    float a, b, x;

    printf("===== GIAI PHUONG TRINH BAC NHAT =====\n");

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    x = -b / a;

    printf("\nPhuong trinh: %.2fx + %.2f = 0\n", a, b);
    printf("Nghiem x = %.2f\n", x);

    return 0;
}