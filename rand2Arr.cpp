#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // 設定隨機種子

    int n[10] = {1,2,3,4,5,6,7,8,9,10}; // 原始順序
    int i, j, temp;

    // 從最後一個元素開始往前交換
    for (i = 9; i > 0; i--) {
        j = rand() % (i + 1); // 產生 0 ~ i 的亂數
        // 交換 n[i] 和 n[j]
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }

    // 輸出洗牌後的結果
    for (i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
