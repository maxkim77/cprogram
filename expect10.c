#include <stdio.h>

int fn(char* a) {
    int i = 0;
    for(i=0; a[i] != '\0'; i++);
    return i;

}
int main() {
    char a[10] = "Hello";
    printf("%d", fn(a));
}
