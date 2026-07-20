#include <stdio.h>
#include <math.h>

int main()
{
    int chon;

    printf("=====================================\n");
    printf("          MENU CHUONG TRINH\n");
    printf("=====================================\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac hai\n");
    printf("3. Tinh tien dien\n");
    printf("0. Thoat\n");
    printf("=====================================\n");
    printf("Nhap lua chon: ");
    scanf("%d", &chon);

    switch (chon)
    {
    case 1:
    {
        float diem;

        printf("\nNhap diem sinh vien: ");
        scanf("%f", &diem);

        if (diem < 0 || diem > 10)
        {
            printf("Diem so nhap vao khong hop le!\n");
        }
        else if (diem >= 9)
        {
            printf("Hoc luc: Xuat sac\n");
        }
        else if (diem >= 8)
        {
            printf("Hoc luc: Gioi\n");
        }
        else if (diem >= 6.5)
        {
            printf("Hoc luc: Kha\n");
        }
        else if (diem >= 5)
        {
            printf("Hoc luc: Trung binh\n");
        }
        else if (diem >= 3.5)
        {
            printf("Hoc luc: Yeu\n");
        }
        else
        {
            printf("Hoc luc: Kem\n");
        }
        break;
    }

    case 2:
    {
        float a, b, c;
        float delta, x1, x2;

        printf("\nNhap a: ");
        scanf("%f", &a);

        printf("Nhap b: ");
        scanf("%f", &b);

        printf("Nhap c: ");
        scanf("%f", &c);

        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                {
                    printf("Phuong trinh vo so nghiem.\n");
                }
                else
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
            }
            else
            {
                printf("Phuong trinh co mot nghiem: x = %.2f\n", -c / b);
            }
        }
        else
        {
            delta = b * b - 4 * a * c;

            if (delta < 0)
            {
                printf("Phuong trinh vo nghiem.\n");
            }
            else if (delta == 0)
            {
                printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
            }
            else
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);

                printf("Phuong trinh co 2 nghiem:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            }
        }
        break;
    }

    case 3:
    {
        int soDien;
        float tien = 0;

        printf("\nNhap so kWh dien tieu thu: ");
        scanf("%d", &soDien);

        if (soDien < 0)
        {
            printf("So kWh khong hop le!\n");
        }
        else if (soDien <= 50)
        {
            tien = soDien * 1678;
        }
        else if (soDien <= 100)
        {
            tien = 50 * 1678 + (soDien - 50) * 1734;
        }
        else if (soDien <= 200)
        {
            tien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
        }
        else if (soDien <= 300)
        {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014
                 + (soDien - 200) * 2536;
        }
        else if (soDien <= 400)
        {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014
                 + 100 * 2536 + (soDien - 300) * 2834;
        }
        else
        {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014
                 + 100 * 2536 + 100 * 2834
                 + (soDien - 400) * 2927;
        }

        if (soDien >= 0)
        {
            printf("Tong tien dien: %.0f VND\n", tien);
        }

        break;
    }

    case 0:
        printf("Cam on da su dung chuong trinh!\n");
        break;

    default:
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}