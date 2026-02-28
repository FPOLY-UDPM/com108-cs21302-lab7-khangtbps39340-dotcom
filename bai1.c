/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT #include <stdio.h>
#include <stdio.h>
int main(){
    char s[100];
    int i = 0;
    int nguyenam = 0;
    int phuam = 0;

    printf("Nhap chuoi: ");
    gets(s);

    while (s[i] != '\0') {

        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            nguyenam++;
        }
        else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) {
            phuam++;
        }

        i++;
    }

    printf("Nguyen am = %d\n", nguyenam);
    printf("Phu am = %d", phuam);

    return 0;
}
