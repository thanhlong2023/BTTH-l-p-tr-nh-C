#include <stdio.h>

int main()
{
    int choice;
    float luongTienCanChuyenDoi, result;
    const float USD_TO_VND = 23500;
    const float EUR_TO_VND = 25000;
    const float GBP_TO_VND = 28000;
    const float JPY_TO_VND = 180;
    const float VND_TO_USD = 1 / USD_TO_VND;
    const float VND_TO_EUR = 1 / EUR_TO_VND;
    const float VND_TO_GBP = 1 / GBP_TO_VND;
    const float VND_TO_JPY = 1 / JPY_TO_VND;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhập đơn vị tiền tệ bạn muốn chuyển đổi (1-8): ");
    scanf("%d", &choice);

    printf("Nhập số tiền cần chuyển đổi: ");
    scanf("%f", &luongTienCanChuyenDoi);

    switch (choice)
    {
    case 1:
        result = luongTienCanChuyenDoi * USD_TO_VND;
        printf("%.2f USD = %.2f VND\n", luongTienCanChuyenDoi, result);
        break;
    case 2:
        result = luongTienCanChuyenDoi * EUR_TO_VND;
        printf("%.2f EUR = %.2f VND\n", luongTienCanChuyenDoi, result);
        break;
    case 3:
        result = luongTienCanChuyenDoi * GBP_TO_VND;
        printf("%.2f GBP = %.2f VND\n", luongTienCanChuyenDoi, result);
        break;
    case 4:
        result = luongTienCanChuyenDoi * JPY_TO_VND;
        printf("%.2f JPY = %.2f VND\n", luongTienCanChuyenDoi, result);
        break;
    case 5:
        result = luongTienCanChuyenDoi * VND_TO_USD;
        printf("%.2f VND = %.2f USD\n", luongTienCanChuyenDoi, result);
        break;
    case 6:
        result = luongTienCanChuyenDoi * VND_TO_EUR;
        printf("%.2f VND = %.2f EUR\n", luongTienCanChuyenDoi, result);
        break;
    case 7:
        result = luongTienCanChuyenDoi * VND_TO_GBP;
        printf("%.2f VND = %.2f GBP\n", luongTienCanChuyenDoi, result);
        break;
    case 8:
        result = luongTienCanChuyenDoi * VND_TO_JPY;
        printf("%.2f VND = %.2f JPY\n", luongTienCanChuyenDoi, result);
        break;
    default:
        printf("Lựa chọn không hợp lệ!\n");
        break;
    }

    return 0;
}
