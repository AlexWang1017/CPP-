#include <stdio.h>
#include <stdlib.h>

// 函式接受一個 int* 陣列，每個元素是指向一行的指標
void print(int *v[], int height, int width){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int v[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 建立一個指標陣列，指向每一行
    int *p[2] = {v[0], v[1]};

    // 傳入指標陣列
    print(p, 2, 3);

    system("pause");
    return 0;
}
