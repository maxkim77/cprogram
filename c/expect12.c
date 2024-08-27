#include <stdio.h>
int f(int i);
int main() {
    printf("%d %d %d", f(1), f(5), f(-2));
}

int f(int i) {
    if(i<=2)
    return 1;
    else
    return f(i-1)+f(i-2); 
}

//f(4)+f(3)
//f(3)+f(2)+f(2)+f(1)
//f(2)+f(1) + 1+ 1+ 1
// 5

// 1 5 1