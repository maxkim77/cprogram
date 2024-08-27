#include <stdio.h>

int fn(int n){
    int a;
    if(n<1) {
        return 2;
    }
    else{
        a=fn(n-1)+1;
        printf("%d",a);
        return a;
    }
    void main(){
        fn(3);
    }
}