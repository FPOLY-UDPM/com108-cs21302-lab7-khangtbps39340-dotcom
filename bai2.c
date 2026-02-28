/******************************************************************************
 * Họ và tên: Trần Bảo Khang
 * MSSV:      
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// V#include <stdio.h>
#include <stdio.h>

int main() {

    char user[20];
    char pass[20];

    printf("Nhap user: ");
    scanf("%s", user);

    printf("Nhap pass: ");
    scanf("%s", pass);

    if (user[0]=='a' && user[1]=='d' && user[2]=='m' && user[3]=='i' && user[4]=='n'
        && pass[0]=='1' && pass[1]=='2' && pass[2]=='3') {

        printf("Dang nhap dung");
    }
    else {
        printf("Dang nhap sai");
    }

    return 0;
}

