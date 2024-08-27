#include <stdio.h>

//좌표 ij가 경계를 벗어나지 않는지 확인하는 함수입니다.
int calc(int w, int h, int j, int i) {
    if (i >= 0 && i < h && j >= 0 && j < w)
        return 1;
    return 0;
}
int calc(int w, int h, int j, in i) {
    if (i >=0 && i< h & j >=0  && j< w)
        return 1;
    return 0;
}

// 4x4 배열의 지뢰찾기 게임을 구현한 코드입니다.
int main() {
    // field 배열은 지뢰가 있는지 없는지를 나타내는 배열입니다.
    int field[4][4] = {{0, 1, 0, 1}, {0, 0, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1}};

    // mines 배열은 지뢰가 몇개 있는지를 나타내는 배열입니다.
    int mines[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int w = 4, h = 4;
    // i, j, k, l 변수는 반복문에서 사용하는 변수입니다.
    int i, j, k, l;
    // field 배열을 순회하면서 지뢰가 있는지 확인하고, mines 배열에 지뢰가 있는지 확인한 값을 저장합니다.
    for (l = 0; l < h; l++) {
        for (k = 0; k < w; k++) {
            if (field[l][k] == 0)
                continue;
            for (i = l - 1; i <= l + 1; i++) {
                for (j = k - 1; j <= k + 1; j++) {
                    if (calc(w, h, j, i) == 1)
                        mines[i][j]+=1;
                }
            }
        }
    }



    for (l = 0; l < h; l++) {
        for (k = 0; k < w; k++) {
            printf("%d ", mines[l][k]);
        }
        printf("\n");
    }

    return 0;
}

int main() {
    int field[4][4] = {{0,1,0,1}, {0,0,0,1}, {1,1,1,0}, {0,1,1,1}};
    int mines[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    int w = 4, h = 4;
    int i, j, k, l;

    for (l = 0; l < h; l++) {
        for (k = 0; k < w; k++) {
            if (field[l][k] ==0)
            continue;
            for (i=l-1; i<=l+1; i++) {
                for (j=k-1; j<=k+1; j++) {
                    if (calc(w,h,j,i) == 1) 
                    mines[i][j] += 1;
                }
            }
        }
    }
    for (l=0; l<h; l++) {
        for(k=0; k<w; k++) {
            printf("%d ", mines[l][k]);
        }
        printf("\n");
    }
    return 0;
}