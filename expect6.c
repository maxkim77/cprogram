#include <stdio.h>
int main() {
    char ch, str[] = "12345000";
    int i, j;

    // 1부터 5까지 만 출력 하기 위해서 ch가 0이 나오면 break
    for(i=0; i<8; i++) {
        ch=str[i];
        if(ch=='0')
        break;
    }
    for(j=0; j<i; j++) {
        i--;
        ch=str[j];
        str[j]=str[i];
        str[i]=ch;
    }
    printf("%s", str);
}