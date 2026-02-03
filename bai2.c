/******************************************************************************
 * Họ và tên: [Nguyễn Qốc Hiệp]
 * MSSV:      [PS48461]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

// Hàm kiểm tra năm nhuận
// Trả về 1 nếu là năm nhuận, 0 nếu không
int laNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
        return 1;
    else
        return 0;
}

int main() {
    int nam;

    // Nhập năm
    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    // Gọi hàm kiểm tra
    if (laNamNhuan(nam))
        printf("%d la nam nhuan\n", nam);
    else
        printf("%d khong phai la nam nhuan\n", nam);

    return 0;
}