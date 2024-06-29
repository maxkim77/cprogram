#include <stdio.h> // 전처리기문을 실행하기 전에 먼저 실행되는 문장들을 모아 놓음
#include <stdlib.h> // c표준 유틸리티 함수들을 모아 놓음
#include <time.h> // 시간과 관련된 함수들을 모아 놓음

int main() {
    int hist[6] = {0};
    int n, i=0;
    srand(time(NULL));

    do {
        i++;
        n=rand()%6+1;
        hist[n-1] += 1;
    }while(i<10);

    for(i=0; i<6; i++)
    printf("h[%d] = %d\n", i, hist[i]);
}