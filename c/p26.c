#include <stdio.h>
int main() {
    int m = 4620;
    int a,b,c,d;
    a = m / 1000;
    b = (m % 1000) / 500;
    c = (m % 500) / 100;
    d = (m % 100)/ 10; 
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);
}