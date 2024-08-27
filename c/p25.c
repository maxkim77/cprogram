#include <stdio.h>
char n[30];
//gets 함수는 입력된 문자열을 전역변수 n에 저장합니다. 이로인해 이전에 저장된 값이 덮어쓰여짐
char *soojebi(){
    gets(n);
    return n;
}
int main() {
    char *p1 = soojebi();
    char *p2 = soojebi();
    char *p3 = soojebi();
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);
    return 0;
}