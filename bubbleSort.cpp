#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[5]; // 宣告一個整數陣列 v，大小為 5，用來儲存輸入的 5 個數字

    // 讀取使用者輸入的 5 個整數
    for (int i = 0; i < 5; i++) {
        printf("請輸入第 %d 個數字：", i + 1); // 提示輸入
        scanf("%d", &v[i]);
    }

    // 使用泡沫排序法（Bubble Sort）將陣列排序（由小到大）
    for (int i = 0; i < 4; i++) { // 外層迴圈跑 4 次（5 個元素需跑 n-1 次）
        for (int j = 0; j < 4; j++) { // 每輪比較相鄰的元素
            if (v[j] > v[j + 1]) { // 如果前一個大於後一個，就交換
                int t = v[j];        // 暫存 v[j]
                v[j] = v[j + 1];     // 將小的移到前面
                v[j + 1] = t;        // 將大的移到後面
            }
        }
    }

    // 輸出排序後的結果
    printf("排序後的結果為：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n"); // 換行

    system("pause"); // 暫停畫面（Windows 用）
    return 0;
}
