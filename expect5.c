#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1; 
// top 변수는 현재 스택의 가장위에 있는 요소의 인덱스를 가리킵니다.  관행적으로 초기값은 -1로 함.


// 스택이 가득 찼는지 확인하는 함수 
void push(int item) {
    if(top>= MAX_SIZE-1) 

        printf("Stack is full\n");
        else 
        stack[++top] = item;   
}

// 스택이 비어있는지 확인하는 함수
int pop() {
    if(top==-1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

int is_empty(){
    if(top==-1)
    return 1;
    else 
    return 0;
}

int main() {
    push(20);
    push(30);
    push(40);
    while(!is_empty())
        printf("%d\n", pop());
}
