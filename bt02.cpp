#include <bits/stdc++.h>
using namespace std;

int main()
{
    int gioLamViec, luongTheoGio;
    printf("Nhập số giờ làm việc: ");
    scanf("%d", &gioLamViec);
    printf("Nhập lương theo giờ: ");
    scanf("%d", &luongTheoGio);
    float phuCap = 0.0;
    float tongTienLuong = 0.0;
    float luongCoBan = gioLamViec * luongTheoGio;
    if (gioLamViec > 160)
    {
        phuCap = 0.1;
        tongTienLuong = luongCoBan + luongCoBan * phuCap;
        printf("Lương cơ bản: %.2f\n", luongCoBan);
        printf("Tiền phụ cấp lương: %.2f\n", luongCoBan * phuCap);
        printf("Tổng tiền lương: %.2f\n", tongTienLuong);
    }
    else
    {
        tongTienLuong = luongCoBan;
        printf("Lương cơ bản: %.2f\n", luongCoBan);
        printf("Tổng tiền lương: %.2f\n", tongTienLuong);
    }
    return 0;
}
