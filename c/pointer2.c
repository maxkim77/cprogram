#include <stdio.h>
int main() {
    int a[3][2] = {{1,2}, {3,4}, {5,6}};
    int *p = a[1];
    printf("%d %d %d\n", *a[0], *a[1], *a[2]);
    printf("%d %d %d\n", **a, **(a+1), **(a+2));
    printf("%d %d\n", *p, *(p+1));
    printf("%d %d\n", p[0], p[1]);
    return 0;
}