#include <stdio.h>
int main(){
    char a[] = "Art";
    char* p = NULL;
    int i = 0;

    p = a;
    printf("%s\n", a);
    printf("%c\n", *p);
    printf("%c\n", *a);
    printf("%s\n", p);

    for (i=0; a[i]!='\0'; i++)
    printf("%c",a[i]);
    return 0;
}