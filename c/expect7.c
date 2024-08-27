#include <stdio.h>
#include <string.h>
// 정수와 문자열을 인자로 받음

int main(int argc, char *argv[]) {
    // 문자열 배열을 선언 하고 초기화
    char str1[20]="KOREA";
    char str2[20]="LOVE";
    // 포인터 변수를 선언하고 NULL로 초기화
    char* p1 = NULL;
    char* p2 = NULL;
    // 포인터 변수에 문자열 배열의 주소를 할당
    p1=str1;
    p2=str2;
    // 문자열 배열의 특정위치에 문자를 할당
    str1[1]=p2[2];
    str2[3]=p1[4];
    // 문자열을 합침
    strcat(str1, str2);
    // 문자열을 출력
    printf("%c", *(p1+2));
    return 0;
}