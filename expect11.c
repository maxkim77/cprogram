#include <stdio.h>
struct st{
    int a;
    int c[10];
};

int main(int argc, char *argv[]) {
    int i=0;
    struct st ob1;
    struct st ob2;
    ob1.a = 0;
    ob2.a = 0;
// 0부터 9까지 ob1.c에 넣고, ob2.c에는 ob1.c[i]에 i를 더한 값을 넣는다.
// 즉 ob1.c = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, ob2.c = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18}
    for(i=0;i<10;i++){
        ob1.c[i]=i;
        ob2.c[i]=ob1.c[i]+i;
    }
    // ob1.c와 ob2.c의 짝수번째 원소를 더한다.
    //즉 ob1.c[0] + ob1.c[2] + ob1.c[4] + ob1.c[6] + ob1.c[8] = 0 + 2 + 4 + 6 + 8 = 20
    // ob2.c[0] + ob2.c[2] + ob2.c[4] + ob2.c[6] + ob2.c[8] = 0 + 4 + 8 + 12 + 16 = 40
    for(i=0;i<10;i=i+2){
        ob1.a=ob1.a+ob1.c[i];
        ob2.a=ob2.a+ob2.c[i];
    }
    printf("%d", ob1.a+ob2.a);
    return 0;
}