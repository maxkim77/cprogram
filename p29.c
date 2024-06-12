#include <stdio.h>
// n이 완전수인지 확인하는 함수입니다.
int perfect_number(int n) {
    int i, sum = 0;
    for (i=1;i<=n/2; i++){
        if (n%i ==0)
            sum+=i;
        }
        if(n==sum)
        return 1;

        return 0;
    }
    // 2부터 100까지 수중 완전수를 찾아 합을 계산
    int main() {
        int i,sum=0;
        for (i=2; i<=100; i++) {
            if (perfect_number(i))
            sum += i;

        }
        printf("%d", sum);

        return 0;
    }