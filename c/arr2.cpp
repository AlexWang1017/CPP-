#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 初始化隨機種子，以當前時間為基礎，讓每次執行結果不同
    srand(time(0));

    // 宣告一個整數陣列，用來統計 1~6 點出現的次數
    int counter[6] = {0};

    // 模擬擲骰子 6000 次
    for (int i = 1; i <= 6000; i++) {
        // 產生 1~6 的隨機數字（代表骰子的點數）
        int dice = rand() % 6 + 1;

        // 將該點數的出現次數加一（陣列從 0 開始，所以要 -1）
        counter[dice - 1]++;
    }

    // 輸出每個點數出現的次數
    for (int j = 1; j <= 6; j++) {
        printf("%d : %d\n", j, counter[j - 1]);
    }

    // 暫停畫面（僅對 Windows 系統有效）
    system("pause");
    return 0;
}

