#include <stdio.h>
int main() {
    int num[10];
    int min = 9999;
    int i;
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