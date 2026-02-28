/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {

    char s[50];
    int i, j;
    char t;

    printf("Nhap: ");
    scanf("%s", s);

    for(i=0; s[i]; i++) {
        for(j=i+1; s[j]; j++) {

            if(s[i] > s[j]) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }

        }
    }

    printf("%s", s);

    return 0;
}
