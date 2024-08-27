#include <stdio.h>
// 스택의 최대크기를 정의하고 변수를 선언하는 공간입니다.
#define MAX_SIZE 10
int isWhat[MAX_SIZE];
int point = -1;

// 스택이 비어있는지 확인을 하고, 없으면 1을 반환 하는 함수입니다.
int isEmpty(){
    if(point==-1) return 1;
    return 0;
}
// 스택이 가득차있는지 확인하는 함수입니다.
int isFull(){
    if(point==10) return 1;
    return 0;
}
//스택에 요소를 삽입하는 함수입니다.
// 요소를 삽입하기 전에 point를 증가시키고 증가된 point 위치에 num 을 저장합니다.
void into(int num) {
    if(point >=10) printf("Full");
    isWhat[++point]=num;
}

// 스택에서 요소를 제거하는 함수
int take(){
    if(isEmpty()==1) printf("Empty");
    return isWhat[point--];
}

int main() {
    into(5);
    into(2);
    while(!isEmpty()) {
        printf("%d", take());
        into(4);
        into(1);
        printf("%d", take());
        into(3);
        printf("%d", take());
        printf("%d", take());
        into(6);
        printf("%d", take());
        printf("%d", take());
    }
    return 0;
}

// 6
// 
// 5

// 2 1 3 4  6 5 