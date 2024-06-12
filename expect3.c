#include <stdio.h>
int main() {
    int num[10];
    int min = 9999;
    int i;

    // 배열에 사용자 입력값을 저장
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    
    for (i=0; i<10; i++){
        if(min > num[i]) {
            min=num[i];
        }
    }
    printf("%d", min);
}